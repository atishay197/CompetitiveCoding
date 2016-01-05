//Char Streams

import java.io.*;

class filewriter
{
	public static void  main(String [] args)
	throws IOException
	{
		FileReader f = new FileReader("a.txt");
		BufferedReader br = new BufferedReader(f);
		String s;
		s = br.readLine();

		char buffer[] = new char[s.length()];
		s.getChars(0,s.length(),buffer,0);

		FileWriter f0 = new FileWriter("file1.txt");
		for(int i = 0 ; i < buffer.length ; i += 2)
		{
			f0.write(buffer[i]);
		}
		f0.close();

		FileWriter f1 = new FileWriter("file2.txt");
		f1.write(buffer);
		f1.close();
	}
}