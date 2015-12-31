#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		long long int n,a,i,min=99999999;
		scanf("%lld",&n);
		for(i=0 ; i<n ; i++)
		{
			scanf("%lld",&a);
			if(a<=min)
				min = a;
		}
		printf("%lld\n",min*(n-1));
	}

}