import java.util.*;
import java.io.*;

class employee
{
	char grade;
	String name;
	int age;
	float GSalary;
	float TSalary;

	employee()
	{
		Scanner s = new Scanner(System.in);
		grade = (s.nextLine()).charAt(0);
		name = s.nextLine();
		age = 30 + (int)((Math.random())*10);
		GSalary = (float)(10000+(int)grade*1000);
		TSalary = (float)(0.8*(GSalary));
	}

	public String toString()
	{
		String s = grade + " " + name + " " + age + " " + GSalary + " " + TSalary + "\n";   
		System.out.println(s);
		return  s;
	}
}

public class empwriter
{
	public static void main(String [] args)
	throws IOException
	{
		BufferedWriter f1 = new BufferedWriter(new FileWriter("emp.txt"));

		for(int i =0 ; i<4 ; i++)
		{
			employee e = new employee();
			f1.write(e.toString());
		} 
		f1.close();

		BufferedReader f2 = new BufferedReader(new FileReader("emp.txt"));
		BufferedWriter f3 = new BufferedWriter(new FileWriter("aem.txt"));

		String k;
		while((k = f2.readLine()) != null)
		{
			if((k.charAt(0) == 'a') || (k.charAt(0) == 'A'))
				f3.write(k + "\n");
		}
		f3.close();
	}
}