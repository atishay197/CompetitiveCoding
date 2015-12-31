#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		int n,count=0;
		scanf("%d" , &n);
		if(n==1)
		{
			count = 1;
			cout<<count<<"\n";
		}
		else if(n==2)
		{
			count = 2;
			cout<<count<<"\n";
		}
		else if(n==3||n==4)
		{
			count = 3;
			cout<<count<<"\n";
		}
		else if(n==5||n==6||n==7)
		{
			count = 4;
			cout<<count<<"\n";
		}
		else if(n==8||n==9||n==10)
		{
			count = 5;
			cout<<count<<"\n";
		}
		else
		{
			count = 6;
			cout<<count<<"\n";
		}
	}
}