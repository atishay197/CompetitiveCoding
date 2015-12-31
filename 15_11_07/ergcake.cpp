#include <bits/stdc++.h>

long long int gcd(long long int a,long long int b)
{
	return (b != 0)? gcd(b, a % b): a;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,m;
		scanf("%lld %lld",&n,&m);
		int l = gcd(n,m);
		if(l==1)
			printf("Yes\n");
		else
			printf("No %lld\n",n/gcd(n,m));
	}
}