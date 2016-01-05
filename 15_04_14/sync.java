class callme
{
	synchronized void call(String msg)
	{
		try
		{
			System.out.print("{ " + msg);	
			Thread.sleep(500);
		}
		catch(InterruptedException e)
		{
			System.out.println("IE caught");
		}
		System.out.print(" }\n");
	}
}

class caller implements Runnable
{
	String msg;
	callme target;
	Thread t;
	public caller (callme targ, String s)
	{
		target = targ;
		msg = s;
		t = new Thread(this);
		t.start();
	}
	public void run()
	{
		target.call(msg);
	}
}

class sync
{
	public static void main(String [] args)
	{
		callme target = new callme();
		caller ob1 = new caller(target , "Hello");
		caller ob2 = new caller(target , "Sync");
		caller ob3 = new caller(target , "World");

		try
		{
			ob1.t.join();
			ob2.t.join();
			ob3.t.join();
		}
		catch(InterruptedException e)
		{
			System.out.println("IE caught");
		}
	}
}