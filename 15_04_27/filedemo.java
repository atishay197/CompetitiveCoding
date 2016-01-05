import java.io.*;

class filedemo
{
	public static void main (String [] args)
	throws IOException
	{
		File g = new File("a.txt");
		System.out.println("Path :" +  g.getPath());
		System.out.println("Absolute Path :" +  g.getAbsolutePath());

		InputStream f = new FileInputStream(g);

		int size = f.available();
		for(int i=0 ; i<size ; i++)
		{
			System.out.print((char) f.read());
		}
		f.close();
	}
}