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
		long long int n,j,sum=0;
		scanf("%lld",&n);
		for(j=1 ; j<=n ; j++)
			sum += (n/gcd(j,n));
		printf("%lld\n",sum);
	}
}
