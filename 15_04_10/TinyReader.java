import java.io.*;

class TinyReader//not working
{
	public static void main(String [] args)
	throws IOException
	{
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		String str[] = new String[10];

		int count = 0;
		System.out.println("Enter lines [stop to stop :p]");
		for(int i=0 ; i<100 ; i++)
		{
			str[i] = br.readLine();
			count++;
			if(i>0)
			{
				if(str[i-1] == "stop")
				{
				 	break;
				}
			}
		}

		System.out.println("Output File : ");
		for (int i=0 ; i<count ; i++)
		{
			System.out.println(str[i]);
		}
	}
}