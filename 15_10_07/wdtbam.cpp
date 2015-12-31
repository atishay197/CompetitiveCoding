#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,w[1005],total=0,sum=-1,i;
		char q[1005],a[1005];
		scanf("%lld",&n);
		scanf("%s",q);
		scanf("%s",a);
		for(i=0 ; i<n ; i++)
			if(q[i] == a[i])
				total++;
		for(i=0 ; i<n+1 ; i++)
		{
			scanf("%lld",&w[i]);
			if(i <= total && sum < w[i])
				sum = w[i];
		}
		if(total == n)
			sum = w[n];
		printf("%lld\n",sum);
	}
}