#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n;
		scanf("%lld",&n);
		long long int k = pow(2,32)-1;
		printf("%lld\n",k^n);
	}
}