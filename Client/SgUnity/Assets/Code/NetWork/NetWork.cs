using System;
using System.Collections.Generic;
using System.Linq;
using System.Threading;
using System.Net.Sockets;
using System.Net;
using UnityEngine;

public delegate void FuncNeStatChgCallBack(NetWorkStat stat);
public delegate bool FuncDecodeData(Byte[] buff, Int32 dataLen, out Int32 decodeLen);

public enum NetWorkStat
{
	None = 0,
	NotReachable,
	IpAddressInvalid,
	Connecting,
	ConnectFailed,
	Connected,
	Disconnected,
}

public class NetWork
{
	public Thread _thread = null;
	public Socket _socket = null;

	public Byte[] _recvBuffer = null;
	public Byte[] _sendBuffer = null;
	public Int32 _recvBuffPos = 0;
	public Int32 _sendBuffPos = 0;
	private object _mutexSend = null;
	//private object _mutextRecv = null;

	private string _serverIp;
	private int _serverPort;

	const Int32 recvBuffLen = 64 * 1024;
	const Int32 sendBuffLen = 64 * 1024;

	public FuncDecodeData funcDecodeData;
	public FuncNeStatChgCallBack funcNetWorkStatChgCallBack;

	private NetWorkStat _netWorkStat;
	private bool _endThread = false;
	private bool _threadRunning = false;
	private bool _sockConnecting = false;

	public NetWork(string serverIp, int serverPort)
	{
		_serverIp = serverIp;
		_serverPort = serverPort;
	}

	public void init()
	{
        if (Application.internetReachability == NetworkReachability.NotReachable)
        {
            Debug.Log("network NotReachable!");
			_netWorkStat = NetWorkStat.NotReachable;
			onNetWorkStatChg();
            return;
        }

		IPAddress ipAdress;
		if (!IPAddress.TryParse(_serverIp, out ipAdress))
		{
			Debug.Log("IPAddress parser ip failed!");
			_netWorkStat = NetWorkStat.IpAddressInvalid;
			onNetWorkStatChg();
			return;
		}

		IPEndPoint	ipe;
		ipe = new IPEndPoint(ipAdress, _serverPort);

		_socket = new Socket(AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
		_socket.BeginConnect(ipe, connectCallback, _socket);
		_netWorkStat = NetWorkStat.Connecting;
		onNetWorkStatChg();
        return;
	}

	public void uninit()
	{
		Debug.Log("NetWork uninit");
		_endThread = true;
		while(_threadRunning)
		{
			Thread.Sleep(20);
		}

		try
		{
			_socket.Shutdown(SocketShutdown.Both);
		}
		catch (System.Exception ex)
		{
			Debug.LogException(ex);
		}

		_socket.Close();
		_socket = null;
		_sockConnecting = false;

		_netWorkStat = NetWorkStat.None;
		//onNetWorkStatChg();

		_sendBuffer = null;
		_sendBuffPos = 0;
		_mutexSend = null;
		_recvBuffer = null;
		_recvBuffPos = 0;
	}

    private void connectCallback(IAsyncResult ar)
    {
        Socket sock = (Socket)ar.AsyncState;
        Debug.Log("connectCallback");
        if(!sock.Connected)
        {
			Debug.Log("connectCallback failed");
			_netWorkStat = NetWorkStat.ConnectFailed;
			onNetWorkStatChg();
            return;
        }

		_sockConnecting = true;
		_sendBuffer = new Byte[sendBuffLen];
		_sendBuffPos = 0;
		_mutexSend = new object();
		_recvBuffer = new Byte[recvBuffLen];
		_recvBuffPos = 0;

		_thread = new Thread(new ThreadStart(this.run));
		_thread.Start();

		_netWorkStat = NetWorkStat.Connected;
		onNetWorkStatChg();

		Debug.Log(string.Format("<color=#00FF00>{0}</color>", "socket started! succ"));
    }

	public	void recieveData(IAsyncResult iar)
	{
        //lock (_mutextRecv)
        //{
			int i32RecvSize = _socket.EndReceive(iar);
			if (i32RecvSize < 6)
			{
				return;
			}

			_recvBuffPos += i32RecvSize;
			Int32 decodeLen;
			if ((i32RecvSize > 0) && (funcDecodeData != null))
			{
				while (funcDecodeData(_recvBuffer, _recvBuffPos, out decodeLen))
				{
					_recvBuffPos -= decodeLen;
					Array.Copy(_recvBuffer, 0, _recvBuffer, _recvBuffPos, recvBuffLen - _recvBuffPos);
				}
			}

			_socket.BeginReceive(_recvBuffer, _recvBuffPos, recvBuffLen - _recvBuffPos, SocketFlags.None, new AsyncCallback(recieveData), this);
        //}
	}

	public	bool send(Byte[] buff, Int32 dataSize)
	{
		if(!_sockConnecting)
		{
			return false;
		}

		if(buff == null)
		{
			return false;
		}

		lock(_mutexSend)
		{
			if(_recvBuffPos+dataSize > sendBuffLen)
			{
				return false;
			}

			Array.Copy(buff, 0, _sendBuffer, _sendBuffPos, dataSize);
			_sendBuffPos += dataSize;
		}

		return true;
	}
	public void run()
	{
		_threadRunning = true;
		_recvBuffPos = 0;
		_socket.BeginReceive(_recvBuffer, _recvBuffPos, recvBuffLen - _recvBuffPos, SocketFlags.None, new AsyncCallback(recieveData), this);
		Debug.Log("start run network thread");

		while (true)
		{
			if (!checkSockStat())
			{
				_netWorkStat = NetWorkStat.Disconnected;
				onNetWorkStatChg();
				break;
			}

			if (_sendBuffPos > 0)
			{
				lock (_mutexSend)
				{
					_socket.Send(_sendBuffer, _sendBuffPos, SocketFlags.None);
					_sendBuffPos = 0;
				}
			}

			if (_endThread)
			{
				break;
			}

			Thread.Sleep(10);
		}

		_threadRunning = false;
		Debug.Log(string.Format("<color=yellow>{0}</color>", "end sock thread"));
	}

	private bool checkSockStat()
	{
		try
		{
			if (_socket.Poll(0, SelectMode.SelectRead) && _socket.Available == 0)
			{
				return false;
			}
		}
		catch (SocketException ex)
		{
			Debug.LogException(ex);
			return false;
		}

		return true;
	}

    public bool isConnected()
    {
		return _netWorkStat == NetWorkStat.Connecting;
    }

	private void onNetWorkStatChg()
	{
		if(funcNetWorkStatChgCallBack != null)
		{
			funcNetWorkStatChgCallBack(_netWorkStat);
		}
	}
}

