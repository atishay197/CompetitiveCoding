class Q
{
	int n;
	boolean valueSet = true;

	synchronized void put(int n)
	{
		while(valueSet)
		{
			try
			{
				wait();
			}
			catch(Exception e)
			{}
		}
		this.n = n;
		System.out.println("Put : " + n);
		valueSet = true;
		notify();
	}

	synchronized int get()
	{
		while(!valueSet)
		{
			try
			{
				wait();
			}
			catch(Exception e)
			{}
		}
		System.out.println("Got : " + n);
		valueSet = false;
		notify();
		return n;
	}

}

class Producer implements Runnable
{
	Q q;
	Producer(Q q)
	{
		this.q = q;
		new Thread(this , "Producer").start();
	}
	public void run()
	{
		int i = 0;
		while(i<10)
		{
			q.put(i++);
		}
	}
}

class Consumer implements Runnable
{
	Q q;
	Consumer(Q q)
	{
		this.q = q;
		new Thread(this , "Consumer").start();
	}
	public void run()
	{
		while(true)
		{
			int i = q.get();
		}
	}
}

class syncthread
{
	public static void main(String [] args)
	{
		Q q = new Q();
		new Producer(q);
		new Consumer(q);
	}
}