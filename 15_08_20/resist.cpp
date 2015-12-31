#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		long long int n,m,a=1,b=1;
		scanf("%lld %lld" , &n,&m);
		while(--n)
		{
			a = (a+b)%m;
			b = (a+b)%m;
		}
		printf("%lld/%lld\n",a,b);
	}	
	return 0;
}
