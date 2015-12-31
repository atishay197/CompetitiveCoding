#include <bits/stdc++.h>
#define M 1000000007
long long int a[1005] = {0},b[1005] = {0};
long long int d[1005] = {0}, p[1005];
int max=0,sum=0;;

void alliteration(int n)
{
	long long int i,j,k,sum=0,lsum,count=0;
	for(i=1 ; i<=pow(2,n) ; i++)
	{
		//printf("\ni = %lld\nElement: ",i);
		j = i;
		lsum = 1;
		count = 0;
		for(k=n ; k>0 ; k--)
		{
			if(j%2 == 1)
			{
				count++;
				lsum = (lsum*p[k])%M;
				//printf("%lld",k);
			}
			j /= 2;
		}
		d[count] += lsum%M;
	}
}

int main()
{
	long long int n,m,c,x,q,i=0,j=0;
	max = 0;
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
	alliteration(q);
	for(i=2 ; i<=c+1 ; i++)
		printf("%lld ",d[i]);
	printf("\n");
}