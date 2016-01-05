class newthread implements Runnable
{
	Thread t;
	newthread()
	{
		t = new Thread(this,"demo thread");
		t.start();
	}

	public void run()
	{
		try
		{
			for(int i=0 ; i<5 ; i++)
			{	
				System.out.println("C : " + i);
				Thread.sleep(200);
			}
		}
		catch(Exception e)
		{
			System.out.println("Exception caught");
		}
	}

	public static void main(String [] args)
	{
		new newthread();
		try
		{
			for(int i=0 ; i<5 ; i++)
			{	
				System.out.println("M : " + i);
				Thread.sleep(200);
			}
		}
		catch(Exception e)
		{
			System.out.println("Exception caught");
		}
	}
}