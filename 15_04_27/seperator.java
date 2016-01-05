import java.io.*;

//0-48,9-47,a-97,z-122, -32,A-65,Z-90,\n=54

public class seperator
{
	public static void main(String [] args)
	throws IOException
	{
		int numscount = 0;
		int charcount = 0;
		int wordcount = 0;
		int linecount = 0;
		File i = new File("a.txt");
		System.out.println((int)'0');
		BufferedReader f = new BufferedReader(new FileReader(i));
		int k;
		while((k=f.read()) != -1)
		{
			System.out.println(k);
			if(k>47 && k<59)
				numscount++;
			if(k>96 && k<122)
				charcount++;
			if(k>64 && k<91)
				charcount++;
			if(k == 32)
				wordcount++;
			if(k == 10)
			{
				wordcount++;
				linecount++;
			}
		}
		f.close();
		BufferedWriter t = new BufferedWriter(new FileWriter("b.txt"));
		String l = "\nnum count : " + numscount + "\nchar count : " + charcount + "\nword count : " + wordcount + "\nline count : " + linecount;
		t.write(l);
		t.close();
	}
}