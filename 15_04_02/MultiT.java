class nthread implements Runnable
{
	String name;
	Thread t;

	nthread(String ThreadName)
	{
		name = ThreadName;
		t = new Thread(this,name);
		System.out.println("The thread is " + t);
		t.start();
		try
		{
			Thread.sleep(1000);
		}
		catch (InterruptedException e)
		{
			System.out.println("LOL");
		}
	}

	public void run()
	{
		try
		{
			for(int i=0 ; i<5 ; i++)
			{
				System.out.println(name + " : " + i);
				Thread.sleep(1000);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println("AWWW.. interrupted");
		}
	}
}

class MultiT
{
	public static void main(String [] args)
	{
		new nthread("one");
		new nthread("two");
		new nthread("tre");
	}
}
