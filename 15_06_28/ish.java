/*1. Write a java program to create and initialize a matrix of integers.
Create n
threads where n is equal to the number of rows in the matrix. Each of
these threads should compute a distinct row sum. The main thread
computes the complete sum by looking into the partial sums given by the
threads.*/


class threader extends Thread
{
	int a[];
	int sum;
	threader(int []k)
	{
		a=k;
		sum=0;
	}

	public void run()
	{
		for(int i=0;i<a.length;i++)
			sum+=a[i];
	}
}

class mat
{
	int arr[][];
	threader t[];
	int row[];

	int sum;

	mat(int b[][])
	{
		t=new threader[b.length];
		arr=b;
		row=new int[b.length];

		for(int m=0;m<b.length;m++)
		{
			t[m]=new threader(arr[m]);
		}

		starter();
	}

	public void starter()
	{
		try
		{
			for(int i=0;i<t.length;i++)
				t[i].start();

			for(int i=0;i<t.length;i++)
				t[i].join();

			for(int i=0;i<t.length;i++)
				row[i]=t[i].sum;
		}

		catch(Exception e){}
	}
}

public class ish
{
	public static void main(String[]args)
	{
		int barr[][]={{1,2,3},{4,5,6},{7,8,9}};
		mat m=new mat(barr);

		int sum=0;
		for(int i=0;i<m.row.length;i++)
			sum+=m.row[i];

		System.out.println(sum);
	}
}