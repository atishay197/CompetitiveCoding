#include<stdio.h>
using namespace std;

int main()
{
	long long int n,q,i,j,a[100002],q1,x,y,v,m = 1000000007;
	scanf("%lld %lld",&n,&q);
	for(i=1 ; i<=n ; i++)
	{
		scanf("%lld" , &a[i]);
	}
	for(i=1 ; i<=q ; i++)
	{
		scanf("%lld %lld %lld" , &q1 , &x , &y);
		switch(q1)
		{
		case 1 :
			scanf("%lld", &v);
			for(j=x ; j<= y ; j++)
			{
				a[j] += v;
				if(a[i] > m)
					a[j] %= m;
			}
			break;
		case 2 :
			scanf("%lld" , &v);
			for(j=x ; j<= y ; j++)
			{
				a[j] *= v;
				if(a[i] > m)
					a[j] %= m;
			}
			break;
		case 3 :
			scanf("%lld" , &v);
			for(j=x ; j<= y ; j++)
				a[j] = v;
			break;
		case 4 :
			long long int sum = 0;
			for(j=x ; j<= y ; j++)
			{
				sum += a[j];
				if(a[i] > m)
					a[j] %= m;
			}
			printf("%lld\n",sum);
			break;
		}
	}
	return 0;
}