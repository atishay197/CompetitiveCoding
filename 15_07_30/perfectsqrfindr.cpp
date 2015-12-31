#include<iostream>
using namespace std;

int main()
{
	long long int a=0,i,b,c;
	int count = 0;
	int flag = 0;
	for(i=0 ; a<10000000000 ; i++)
		{
			flag = 1;
			a = i*i;
			b = a;
			while(b > 0)
			{
				c = b%10;
				if(c != 0 && c != 1 && c != 4 && c != 9)
				{
					flag = 0;
				}
				b = b/10;
			}
			if(flag)
			{
				cout<<a<<" , ";
				count++;
			}
		}
		cout<<"\n"<<count<<"\n";

}