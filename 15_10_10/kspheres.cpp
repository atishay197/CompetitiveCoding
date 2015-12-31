#include <bits/stdc++.h>
#define M 1000000007
int a[1005] = {0},b[1005] = {0},p[1005];
int max=0,sum=0;;

long long int alliteration(int n,int l)
{
	long long int i,j,k,sum=0,lsum,count=0;
	//printf("Iteration of : %d\n",l);
	for(i=1 ; i<=pow(2,n) ; i++)
	{
		//printf("\ni = %d\nElement: ",i);
		j = i;
		lsum = 1;
		count = 0;
		for(k=n ; k>0 ; k--)
		{
			if(j%2 == 1)
			{
				count++;
				lsum = (lsum*p[k])%M;
				//printf(" %d",k);
			}
			j /= 2;
		}
		if(count == l)
		{
			//printf("\nYES\n");
			sum += lsum%M;
		}
	}
	return sum;
}

int main()
{
	long long int n,m,c,x,j=0,i=0,q;
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
	for(i=2 ; i<=c+1 ; i++)
		printf("%lld ",alliteration(q,i));
	printf("\n");
}