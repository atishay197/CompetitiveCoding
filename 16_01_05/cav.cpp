#include <bits/stdc++.h>

int main()
{
	int n,i,j;
	char a[105][105];
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		for(j=0 ; j<=n ; j++)
			scanf("%c",&a[i][j]);
	}
	for(i=1 ; i<n-1 ; i++)
	{
		for(j=2 ; j<n ; j++)
		{
			//printf("i j : %d %d\n",i,j);
			//printf("a[i][j] : %c\n",a[i][j]);
			//printf("4 : %c %c %c %c\n",a[i-1][j],a[i][j-1],a[i+1][j],a[i][j+1]);
			if((a[i-1][j] < a[i][j]) && (a[i][j-1] < a[i][j]) && (a[i+1][j] < a[i][j]) && (a[i][j+1] < a[i][j]))
				a[i][j] = 'X';
		}
	}
	for(i=0 ; i<n ; i++)
	{
		for(j=1 ; j<=n ; j++)
			printf("%c",a[i][j]);
		printf("\n");
	}
}