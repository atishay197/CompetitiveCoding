#include <bits/stdc++.h>

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		long long int n,i,a[100005] = {0};
		scanf("%lld",&n);
		for(i=0 ; i<n ; i++)
			scanf("%lld",&a[i]);
		long long int k = a[0],count = 1,total = 0;
		for(i=1 ; i<=n ; i++)
		{
			//printf("a[i] : %lld k : %d count : %d total : %d\n",a[i],k,count,total);
			if(a[i] >= k)
				count++;
			else
			{
				total += count*(count + 1)/2;
				count = 1;
			}
			k = a[i];
		}
		printf("%lld\n",total);
	}
}