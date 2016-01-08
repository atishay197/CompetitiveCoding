#include <bits/stdc++.h>

int main()
{
	int n,m,x,i;
	int a[10005][2];
	scanf("%d",&n);
	int mina = 99999;
	int maxa = 0; 
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&x);
		a[x][0]++;
		if(x<mina)
			mina = x;
		if(x>maxa)
			maxa = x;
	}

	scanf("%d",&m);
	for(i=0 ; i<m ; i++)
	{
		scanf("%d",&x);
		a[x][1]++;
		if(x<mina)
			mina = x;
		if(x>maxa)
			maxa = x;
	}

	for(i=mina ; i<=maxa ; i++)
	{
		if(a[i][0] != a[i][1])
			printf("%d ",i);
	}
	printf("\n");
}