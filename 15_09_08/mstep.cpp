#include <bits/stdc++.h>

int abs(int n)
{
	return n>0?n:(-1*n);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,n,count=0,x,a[250002][2] = {0};
		scanf("%d",&n);
		for(i=0 ; i<n ; i++)
		{
			for(j=0 ; j<n ; j++)
			{
				scanf("%d",&x);
				a[x][0] = i;
				a[x][1] = j;
			}
		}
		for(i=2 ; i<=n*n ; i++)
			count += abs(a[i][0]-a[i-1][0]) + abs(a[i][1]-a[i-1][1]);
		printf("%d\n",count);
	}
}