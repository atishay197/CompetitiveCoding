import java.util.*;

class student
{
	int reg;
	String name;
	GregorianCalendar doj;
	int sem;
	float gpa;
	float cgpa;
	
	public student()
	{
		reg = 0;
		name = "A";
		doj = new GregorianCalendar();
		sem = 0;
		gpa = 1;
		cgpa = 1;
	}
	
	public student(String n , GregorianCalendar d , int s , float g , float c, int count)
	{
		this.reg = (d.get(Calendar.YEAR)-2000)*100+count;
		this.name = n;
		this.doj = d;
		this.sem = s;
		this.gpa = g;
		this.cgpa = c;
	}
	
	public student(student s)
	{
		reg = s.reg;
		name = s.name;
		doj = s.doj;
		sem = s.sem;
		gpa = s.gpa;
		cgpa = s.cgpa;
	}
	
	public void display()
	{
		System.out.print(reg + "\t");
		System.out.print(name + "\t\t");
		System.out.print(doj.get(Calendar.DATE) + "/" + doj.get(Calendar.MONTH) + "/" + doj.get(Calendar.YEAR) + "\t");
		System.out.print(sem + "\t");
		System.out.print(gpa + "\t");
		System.out.print(cgpa + "\n");
	}
}

class w4_2
{
	public static void main(String [] args)
	{
		student s[] = new student[5];
		Scanner scan = new Scanner(System.in);
		s[0] = new student("Atishay Kumar",new GregorianCalendar(2012,5,6),1,9.2f,8.6f,1);
		s[1] = new student("Saarang Singh",new GregorianCalendar(2013,9,25),4,9.8f,9.6f,1);
		s[2] = new student("Shubham Naik",new GregorianCalendar(2014,4,11),1,8.2f,8.4f,1);
		s[3] = new student("Shivam Srivstv",new GregorianCalendar(2012,1,19),1,7.2f,8.8f,2);
		s[4] = new student("Pai Naik",new GregorianCalendar(2013,5,6),6,7.8f,7.6f,2);
		System.out.print("Reg.No.\t Name \t\t\tDOJ\t\tSem\tGPA\tCGPA\n");
		System.out.print("-------\t ---- \t\t\t---\t\t---\t---\t----\n");
		for(int j=0 ; j<5 ; j++)
			s[j].display();
			
		student temp;
		for(int i=0 ; i<4 ; i++)
		{
			for(int j=0 ; j<4 ; j++)
			{
				if(s[j].sem>s[j+1].sem)
				{
					temp = s[j];
					s[j] = s[j+1];
					s[j+1] = temp;
				}
			}
		}
		System.out.println("\nSorted list (only sem):");
		System.out.print("Reg.No.\t Name \t\t\tDOJ\t\tSem\tGPA\tCGPA\n");
		System.out.print("-------\t ---- \t\t\t---\t\t---\t---\t----\n");
		for(int j=0 ; j<5 ; j++)
			s[j].display();
			
		for(int i=0 ; i<4 ; i++)
		{
			for(int j=0 ; j<4 ; j++)
			{
				if(s[j].sem == s[j+1].sem)
				{
					if(s[j].cgpa>s[j+1].cgpa)
					{
						temp = s[j];
						s[j] = s[j+1];
						s[j+1] = temp;
					}
				}
			}
		}
		System.out.println("\nSorted list:");
		System.out.print("Reg.No.\t Name \t\t\tDOJ\t\tSem\tGPA\tCGPA\n");
		System.out.print("-------\t ---- \t\t\t---\t\t---\t---\t----\n");
		for(int j=0 ; j<5 ; j++)
			s[j].display();
			
		System.out.println("\nStarts with 'S':");
		System.out.print("Reg.No.\t Name \t\t\tDOJ\t\tSem\tGPA\tCGPA\n");
		System.out.print("-------\t ---- \t\t\t---\t\t---\t---\t----\n");
		for(int j=0 ; j<5 ; j++)
		{
			if(s[j].name.startsWith("S"))
				s[j].display();
		}
		
		System.out.println("\nContains 'Naik':");
		System.out.print("Reg.No.\t Name \t\t\tDOJ\t\tSem\tGPA\tCGPA\n");
		System.out.print("-------\t ---- \t\t\t---\t\t---\t---\t----\n");
		for(int j=0 ; j<5 ; j++)
		{
			if(s[j].name.indexOf("Naik") != -1)
				s[j].display();
		}
	}
}


