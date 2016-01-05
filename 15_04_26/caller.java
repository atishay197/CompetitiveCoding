class callme
{
	synchronized void call(String msg)
	{
		System.out.print("{" + msg);
		try
		{
			Thread.sleep(500);
			System.out.println("}");
		}
		catch(Exception e)
		{
			System.out.println("Exception caught");
		}
	}
}

class caller implements Runnable
{
	String msg;
	callme a;
	Thread t;

	public caller(callme c , String s)
	{
		a = c;
		msg = s;
		t = new Thread(this);
		t.start();
	}

	public void run()
	{
		a.call(msg);
	}

	public static void main(String args[])
	{
		callme target = new callme();
		caller ob1 = new caller(target,"1");
		caller ob2 = new caller(target,"2");
		caller ob3 = new caller(target,"3");

		try
		{
			ob1.t.join();
			ob2.t.join();
			ob3.t.join();
		}
		catch(Exception e)
		{

		}
	}
}