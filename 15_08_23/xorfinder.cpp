#include <bits/stdc++.h>
using namespace std;
bool a[1000000000] = {0};

int main()
{
	long long int t=10,i,j;
	printf("%lld\n",t);
	for(i=0 ; i<t ; i++)
	{
		j = (i)^(i+1);
			printf("%lld ^ %lld = %lld\n",i,i+1,j);
		
	}
}