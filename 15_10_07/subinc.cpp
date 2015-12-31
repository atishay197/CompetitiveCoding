#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,a,pa,i,b[100005],j=0,sum=0;
		for(i=0 ; i<=100005 ; i++)
			b[i] = 1;
		scanf("%lld",&n);
		for(i=0 ; i<n ; i++)
		{
			pa = a;
			scanf("%lld",&a);
			if(i>0)
			{
				if(a > pa)
				{
					b[j]++;
				}
				else
					j++;
			}
		}
		for(i=0 ; i<=j ; i++)
		{
			sum += b[i]*(b[i]+1)/2;
		}
		printf("%lld\n",sum);
	}

}