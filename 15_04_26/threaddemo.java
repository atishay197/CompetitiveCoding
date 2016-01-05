class threaddemo
{
	public static void main(String args[])
	{
		Thread t = Thread.currentThread();
		System.out.println("Current :" + t);

		t.setName("My Thread");
		System.out.println("Current name :" + t);

		try
		{
			for(int i=0 ; i<5 ; i++)
			{
				System.out.println(i);
				Thread.sleep(200);
			}
		}
		catch(Exception e)
		{
			System.out.println("Exception caught");
		}

	}
}