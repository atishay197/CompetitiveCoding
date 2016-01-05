import java.io.*;

class fileh
{
	public static void main(String [] args)
	throws IOException
	{
		FileInputStream f;
		try
		{
			f = new FileInputStream(args[0]);
		}
		catch(FileNotFoundException e)
		{
			System.out.println("File not found");
			return;
		}
		int i;
		do
		{
			i = f.read();
			if(i != -1)
				System.out.print((char)i);
		}while(i != -1);
	}
	//f.close();
}