#include <stdio.h>
#include<ctime>

using namespace std;

int main()
{
	long long int n,q,i=1,j,a[100002],q1,x,y,v,m = 1000000007,sum=0;
	scanf("%lld %lld",&n,&q);
	//clock_t begin = clock();
	scanf("%lld %lld",&n,&q);
	//clock_t end = clock();
	//float elapsed_secs = 1000000 * double(end - begin) / CLOCKS_PER_SEC;
	//printf("Time : %f\n",elapsed_secs);
	while(n--)
	{
		scanf("%lld" , &a[i]);
		sum +=  a[i++];
	}
	while(q--)
	{
		scanf("%lld %lld %lld" , &q1 , &x , &y);
		if(q1 == 1)
		{
			scanf("%lld", &v);
			sum += (y-x+1)*v;
			for(j=x ; j<= y ; j++)
			{
				a[j] += v;
				if(a[i] > m)
					a[j] %= m;
			}
			//cout<<"\nQ1 = 1 SUM : "<<sum<<endl;
		}
		if(q1 == 2)
		{
			scanf("%lld" , &v);
			for(j=x ; j<= y ; j++)
			{
				//cout<<a[j]<<" ";
				sum += (a[j]*(v-1))%m;
				a[j] = a[j]*v;
				if(a[i] > m)
					a[j] %= m;
			}
			//cout<<"\nQ1 = 2 SUM : "<<sum<<endl;
		}
		if(q1 == 3)
		{
			scanf("%lld" , &v);
			for(j=x ; j<= y ; j++)
			{
				sum += a[j]-v;
				a[j] = v;
			}
			//out<<"\nQ1 = 3 SUM : "<<sum<<endl;
		}
		if(q1 == 4)
		{
			printf("%lld\n",sum);
		}
	}
	return 0;
}
//4 4 1 2 3 4 4 1 4 1 1 3 10 2 2 4 2 4 1 4