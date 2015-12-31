#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int x,y,z,i,j,k;
		int a[100][100][100],b[100][100][100];
		scanf("%d %d %d",&x,&y,&z);
		for(i=0 ; i<x ; i++)
		{
			for(j=0 ; j<y ; j++)
			{
				for(k=0 ; k<z ; k++)
				{
					scanf("%d",&a[i][j][k]);
				}
			}
		}
		for(i=0; i<x; i++)
		{
			for(j=0; j<y; j++) 
			{
				for(k=0; k<z; k++)
				{
					if(!i&&!j&&!k)
						b[i][j][k]=a[i][j][k];
					else if(!i&&!j)
						b[i][j][k]=a[i][j][k]-a[i][j][k-1];
					else if(!i&&!k)
						b[i][j][k]=a[i][j][k]-a[i][j-1][k];
					else if(!j&&!k)
						b[i][j][k]=a[i][j][k]-a[i-1][j][k];
					else if(!i)
						b[i][j][k]=a[i][j][k]-a[i][j-1][k]-a[i][j][k-1]+a[i][j-1][k-1];
					else if(!j)
						b[i][j][k]=a[i][j][k]-a[i-1][j][k]-a[i][j][k-1]+a[i-1][j][k-1];
					else if(!k)
						b[i][j][k]=a[i][j][k]-a[i][j-1][k]-a[i-1][j][k]+a[i-1][j-1][k];
					else
						b[i][j][k]=a[i][j][k]-a[i-1][j][k]-a[i][j-1][k]-a[i][j][k-1]+a[i][j-1][k-1]+a[i-1][j-1][k]+a[i-1][j][k-1]-a[i-1][j-1][k-1];
				}
			}
		}
	 
		for(i=0 ; i<x ; i++)
		{
			for(j=0 ; j<y ; j++)
			{
				for(k=0 ; k<z ; k++)
				{
					printf("%d ",b[i][j][k]);
				}
				printf("\n");
			}
		}
	}
}