class MyException extends Exception
{
	private int detail;
	MyException(int a)
	{
		detail = a;
	}

	public String toString()
	{
		return "My Exception [" + detail + "]";
	}
}

class myexcptn 
{
	public static void compute (int a) throws MyException
	{
		if(a > 10)
			throw new MyException(a);
		else
			System.out.println("Normal Execution");
	}

	public static void main (String [] args)
	{
		try
		{
			compute(1);
			compute(12);
		}
		catch (MyException e)
		{
			System.out.print("Caught : " + e);
		}
		
	}
}