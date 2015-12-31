#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		long long int n,a,b, i, count = 0,flag = 0;
		scanf("%lld" , &n);
		scanf("%lld" , &b);
		for(i=1;i<n;i++)
		{
			scanf("%lld" , &a);
			if(a==b)
				flag=0;
			else
			{
				if(flag)
					count++;
				else
					count+=2;
				flag=1;
			}
			b=a;
		}
		printf("%lld\n",count);
	}
	return 0;
}
//3 7 1 1 1 3 3 3 2 5 1 3 1 1 1 4 5 5 5 5