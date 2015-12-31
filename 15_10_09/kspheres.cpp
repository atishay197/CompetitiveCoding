#include <bits/stdc++.h>
#define M 1000000007
int a[1005] = {0},b[1005] = {0},p[1005];
int max=0,sum=0;;

int arraypicker(int s,int total,int n,int lsum)
{
	int i;
	if(n < total || s < 0 || s < n-1)
	{
		printf("NoSu\n");
		return 0;
	}
	if(n == total)
	{
		printf("Su\n");
		return 1;
	}
	for(i=s ; i>-1 ; i--)
	{
		if(p[i] > 0)
		{
			printf("E:%d ",i);
			lsum += arraypicker(i-1,total+1,n,lsum)*p[i];
			printf("Lsum:%d\n",lsum);
		}
	}
	return lsum;
}

int spfinder(int n)
{
	printf("I:%d\n",n);
	int lsum = 0;
	return arraypicker(1005,0,n,lsum);
}

int main()
{
	int n,m,c,x,j=0,i=0;
	max = 0;
	scanf("%d %d %d",&n,&m,&c);
	while(n--)
	{
		scanf("%d",&x);
		a[x]++;
	}
	while(m--)
	{
		scanf("%d",&x);
		b[x]++;
	}
	for(i=0 ; i<1005 ; i++)
		p[i] = a[i]*b[i];
	for(i=1 ; i<=c+1 ; i++)
		printf("\nSum:%d\n\n",spfinder(i));
	printf("\n");
}