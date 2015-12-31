#include <bits/stdc++.h>
using namespace std;
bool a[1000000] = {0};

int main()
{
	long long int i,j,k,l,m;
	for(i=0 ; i<31 ; i++)
	{
		k = i+1;
		j = pow(2,i);
		l = j-1;
		m = l^j;
		printf("%lld XOR %lld = %lld\n",l,j,m);
		//printf("%lld,",j);
	}
}
