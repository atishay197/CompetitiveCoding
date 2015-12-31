#include<bits/stdc++.h>
using namespace std;
long long int f[100] = {0};

int fib(int n)
{
	if(n==0)
		return 0;
	if(n==1)
		return 1;
	if(f[n] != 0)
		return f[n];
	f[n] = fib(n-1) + fib(n-2);
	return f[n];
}

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		long long int n,count=2,j=1,i,k=0;
		scanf("%lld" , &n);
		if(n==1)
			cout<<"1\n\n";
		if(n==2)
			cout<<"2\n\n";
		else if(n<1005)
		{
			for(i=3 ; i<n ; i+=j)
			{
				count++;
				j=fib(k++);//use fib here;
			}
			cout<<count<<"\n\n";
		}
		else
			cout<<"0\n";
	}
}