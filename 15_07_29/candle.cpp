#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,a[10],smallest=9999,age=10,num=0;
		for(i=0 ; i<10 ; i++)
		{
			cin>>a[i];
			if(a[i]<smallest || (age==0 && a[i]==smallest))
			{
				smallest = a[i];
				age = i;
			}
		}
		if(age == 0)
		{
			num = pow(10,smallest+1);
		}
		else
		{
			for(i=0 ; i<=smallest ; i++)
				num = num*10+age;
		}
		cout<<num<<"\n";
	}

	return 0;
}
//3 2 1 1 4 0 6 3 2 2 2 0 1 1 1 1 1 1 1 1 1 2 2 1 2 1 1 3 1 1 1