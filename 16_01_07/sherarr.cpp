#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int i,n,a[100005],b[100005] = {0},sum=0;
		int flag = 0;
		scanf("%lld",&n);
		for(i=0 ; i<n ; i++)
		{
			scanf("%lld",&a[i]);
			sum+=a[i];
			b[i] = sum;
		}
		// for(i=0 ; i<n ; i++)
		// 	printf("%lld ",b[i]);
		// printf("\n%lld\n",sum);
		sum=0;
		for(i=n-1 ; i>=0 ; i--)
		{
			sum+=a[i];
			if(b[i] == sum)
			{
				flag = 1;
				break;
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
}