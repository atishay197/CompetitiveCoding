#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		long long int n,m,flag=0,i,a;
		scanf("%lld" , &n);
		if(n == 1)
		{
			flag = 1;
			printf("2\n");
			continue;
		}
		for(i=1 ; i<31 ; i++)
		{
			a = pow(2,(i+1))-1;
			if(n == a)
			{
				m = pow(2,i)-1;
				flag = 1;
				break;
			}
		}
		if(flag == 0)
			printf("-1\n");
		else
			printf("%lld\n",m);
	}

}