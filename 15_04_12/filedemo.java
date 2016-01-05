import java.io.File;

class filedemo
{
	static void p(String s)
	{
		System.out.println(s);
	}

	public static void main(String [] args)
	{
		File f1 = new File ("/","Atishay.txt");
		p(f1.getName());
		p(f1.getPath());
	}
}