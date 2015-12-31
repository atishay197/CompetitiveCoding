#include<bits/stdc++.h>
using namespace std;
long long int f[100] = {0};

long long int fib(long long int n)
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
	long long int t;
	scanf("%lld" , &t);
	while(t--)
	{
		long long int n,count=-1,j=1,i,k=0;
		scanf("%lld" , &n);
		for(i=0 ; i<n ; i+=j)
		{
			count++;
			j=fib(k++);
		}
		cout<<count<<"\n";
	}
}