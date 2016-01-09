#include <bits/stdc++.h>
bool a[10][10],b[10][10] = {0};
int n,m;

int explore(int i,int j)
{
	//printf(" -> %d %d %d\n",i,j,a[i][j]);
	if(a[i][j] && (i>=0 && i<n) && (j>=0 && j<m) && !b[i][j])
	{
		b[i][j] = 1;
		int p = explore(i+1,j)+ explore(i-1,j)+ explore(i,j+1)+ explore(i,j-1);
		int q = explore(i+1,j+1)+ explore(i+1,j-1)+ explore(i-1,j+1)+ explore(i-1,j-1);
		return 1 + p + q; 
	}
	else
		return 0;
}

int main()
{
	int k=0, max = 0, i, j;
	scanf("%d %d",&n,&m);
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<m ; j++)
		{
			if(!b[i][j])
			{
				//printf("%d :: ",b[i][j]);
				k = explore(i,j);
				if(max < k)
					max = k;
			}
		}
	}
	printf("%d\n",max);
}