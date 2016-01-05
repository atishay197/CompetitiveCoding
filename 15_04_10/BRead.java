import java.io.*;

class BRead
{
	public static void main(String [] args)
	throws IOException
	{
		char c;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		System.out.println("ENter charecter");

		do
		{
			c = (char)br.read();
			System.out.println(c);
		}while(c != 'q');
	}
}