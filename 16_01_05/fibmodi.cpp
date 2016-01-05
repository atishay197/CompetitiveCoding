#include <bits/stdc++.h>

long long int f[25];

long long int fib(int n)
{
	//printf("fibs : %d %d\n",n,f[n]);
	if(f[n] != -9999)
		return f[n];
	long long int k = fib(n-1);
	f[n] = k*k + fib(n-2);
	return f[n];
}

int main()
{
	int n;
	for(int i=0 ; i<25 ; i++)
		f[i] = -9999;
	scanf("%lld %lld %d",&f[1],&f[2],&n);
	printf("%lld\n",fib(n));
}