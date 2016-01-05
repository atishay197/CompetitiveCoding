#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,l,m=0;
		scanf("%d %d",&n,&k);
		for(int i=0 ; i<n ; i++)
		{
			scanf("%d",&l);
			if(l<=0)
				m++;
		}
		if(m>=k)
			printf("NO\n");
		else
			printf("YES\n");
	}
}