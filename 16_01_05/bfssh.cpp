#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a[1002][1002]={0};
		int n,m,x,y,i,j,k,st;
		scanf("%d %d",&n,&m);
		for(i=1 ; i<=n ; i++)
		{
			for(j=1 ; j<=n ; j++)
				a[i][j] = 9999;
		}
		for(i=0 ; i<m ; i++)
		{
			scanf("%d %d",&x,&y);
			a[x][y] = 6;
			a[y][x] = 6;
		}
		scanf("%d",&st);
		/*
		for(i=1 ; i<=n ; i++)
		{
			for(j=1 ; j<=n ; j++)
				printf("%d ",a[i][j]);
			printf("\n");
		}
		*/
		for(k=1 ; k<=n ; k++)
		{
			for(i=1 ; i<=n ; i++)
			{
				for(j=1 ; j<=n ; j++)
				{
					if(a[i][j] > a[i][k] + a[k][j])
						a[i][j] = a[i][k] + a[k][j];
				}
			}
		}
		for(k=1 ; k<=n ; k++)
		{
			if(k != st)
			{
				if(a[st][k] == 9999)
					printf("-1 ");
				else
					printf("%d ",a[st][k]);
			}
		}
		printf("\n");
	}
}