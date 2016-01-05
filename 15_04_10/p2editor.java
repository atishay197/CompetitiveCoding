import java.io.*;

class p2editor
{
	public static void main(String [] args)
	throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str[] = new String[100];

		int count = 0;
		System.out.println("Enter lines [stop to stop :p]");
		str[0] = "Hello";
		for(int i=1 ; i<100 ; i++)
		{
			str[i] = br.readLine();
			count++;
			if(str[i].equals("stop")) break;
		}

		System.out.println("Output File : ");
		for (int i=1 ; i<count ; i++)
		{
			System.out.println(str[i]);
		}

		System.out.write('A');
		System.out.write('\n');
	}
}