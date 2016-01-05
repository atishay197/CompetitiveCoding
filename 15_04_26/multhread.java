class multhread implements Runnable
{
	String name;
	Thread t;

	multhread(String tname)
	{
		name = tname;
		t = new Thread(this, name);
		System.out.println("new thread : "+ t);
		t.start();
	}

	public void run()
	{
		try
		{
			for(int i = 0 ; i < 5 ; i++)
			{
				System.out.println("name : " + i);
				Thread.sleep(500);
			}
		}
		catch(Exception e)
		{
			System.out.println("Exception caught");
		}
		System.out.println("Exiting " + name);
	}

	public static void main(String [] args)
	{
		new multhread("One");
		new multhread("Two");
		new multhread("Tre");
	}
}