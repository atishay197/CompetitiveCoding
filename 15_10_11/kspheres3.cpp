#include <bits/stdc++.h>
#define M 1000000007
long long int a[1005] = {0},b[1005] = {0};
long long int d[1005][1005] = {0}, p[1005];
 
void populate2(int q)
{
	int i,j,k;
	for(i=1 ; i<=q ; i++)
	{
		for(j=i+1 ; j<=q ; j++)
			d[2][j] = (d[2][j]+p[i]*p[j])%M;
	}
}
 
long long int populate(long long int n,int q)
{
	long long int i,j,lsum=0;
	for(j=n ; j<=q ; j++)
	{
		for(i=n-1 ; i<j ; i++)
				d[n][j] = (d[n][j] + p[j]*d[n-1][i])%M;
	}
	return lsum;
}
 
int main()
{
	long long int n,m,c,x,q,i=0,j=0,lsum=0,lol=0;
	scanf("%lld %lld %lld",&n,&m,&c);
	while(n--)
	{
		scanf("%lld",&x);
		a[x]++;
	}
	while(m--)
	{
		scanf("%lld",&x);
		b[x]++;
	}
	for(i=0 ; i<1005 ; i++)
	{
		p[i] = a[i]*b[i];
		if(p[i] != 0)
			q = i;
	}
	populate2(q);
	for(i=2 ; i<=c+1 ; i++)
	{
		lsum=0;
		if(i<=q)
		{
			populate(i,q);
			for(j=i ; j<=q ; j++)
				lsum = (lsum+d[i][j])%M;
		}
		else
			lsum=0;
		printf("%lld ",lsum);
	}
	printf("\n");
}
 
//5 7 5 1 2 3 4 5 1 2 2 3 4 4 5 
 