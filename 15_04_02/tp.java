class nthread implements Runnable
{
	Thread t;
	nthread()
	{
		t = new Thread(this , "Thread1");
		System.out.println("Child thread = " + t);
		t.start();
	}

	public void run()
	{
		try
		{
			for(int i=0 ; i<5 ; i++)
			{
				System.out.println(t + " - " + i);
				Thread.sleep(500);
			}
		}
		catch(InterruptedException e)
		{
			System.out.println("Awwwww...");
		}
		System.out.println("Exiting Child Thread");
	}
}
class tp
{
	public static void main(String [] args)
	{
		Thread t = Thread.currentThread();
		System.out.println("The current thread is " + t);

		t.setName("Atishay ka thread");
		int j = t.getPriority();
		System.out.println("The new thread name is " + t + "\nPriority :" + j);

		try
		{
			for(int i=0 ; i<5 ; i++)
			{
				System.out.println(i);
				Thread.sleep(200);
			}	
		}
		catch(InterruptedException e)
		{
			System.out.print("Shit i was interrupted");
		}
		System.out.println("Main Thread Exiting");
		new nthread();
	}
}