//Producer Consumer Problem

class Q
{
	int n;
	boolean valueSet = false;

	syncronized int get()
	{
		while(!valueSet)
		{
			try
			{
				wait();
			}
			catch(InteruuptedException e)
			{
				System.out.println("Interupted Exception Caught");
			}
			System.out.println("Got : " + n);
			valueSet = false;
			notify();
			return n;
		}
	}

	syncronized void put(int n)
	{
		while(valueSet)
		{
			try
			{
				wait();
			}
			catch(InteruuptedException e)
			{
				System.out.println("Interupted Exception Caught");
			}
			this.n = n;
			valueSet = true;
			notify();
		}
	}

}

class Producer implements Runnable
{
	Q q;
	Producer (Q q)
	{
		this.q = q;
		new Thread(this , "Producer").start();
	}
	public void run()
	{
		int i=0;
		while(true)
		{
			q.put(i++);
		}
	}
}

class Consumer implements Runnable
{
	Q q;
	Consumer (Q q)
	{
		this.q = q;
		new Thread(this , "Consumer").start();
	}
	public void run()
	{
		int i = 0;
		while(true)
		{
			q.get(i++);
		}
	} 
}

class PCq
{
	public static void main(String []  args)
	{
		Q q  = new Q();
		new Producer(q);
		new consumer(q);
	}
}