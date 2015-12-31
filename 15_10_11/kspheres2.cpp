#include <bits/stdc++.h>
#define M 1000000007
long long int a[1005] = {0},b[1005] = {0};
long long int d[1005][1005] = {0};

int populate(long long int n,int q)
{
	int i,j,lsum=0;
	for(j=n ; j<=q ; j++)
	{
		for(i=n-1 ; i<j ; i++)
				d[n][j] = (d[n][j] + d[1][j]*d[n-1][i])%M;
		lsum += d[n][j];
	}
	return lsum;
}

int main()
{
	long long int n,m,c,x,q=0,i=0,j=0,lsum=0;
	scanf("%lld %lld %lld",&n,&m,&c);
	while(n--)
	{
		scanf("%lld",&x);
		a[x]++;
		if(q<x)
			q=x;
	}
	while(m--)
	{
		scanf("%lld",&x);
		b[x]++;
		if(q<x)
			q=x;
	}
	for(i=0 ; i<=q ; i++)
		d[1][i] = a[i]*b[i];
	for(i=2 ; i<=c+1 ; i++)
	{
		lsum = populate(i,q);
		printf("%lld ",lsum);
	}
	printf("\n");
}

//5 7 5 1 2 3 4 5 1 2 2 3 4 4 5