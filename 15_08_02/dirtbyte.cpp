#include<bits/stdc++.h>
using namespace std;
#define N 1000000005
bool a[N] = {0};
int main()
{
	long long int n,k,x;
	int i,j,l;
	double count = 0;
	scanf("%lld %lld",&n,&k);
	for(j=0 ; j<k ; j++)
	{
		scanf("%lld" , &x);
		for(i=x,l=1 ; i<=n ; i+=x)
			a[i] = 1;
	}
	for(i=1 ; i<=n ; i++)
	{
		if(a[i] == 0)
			count++;
	}
	double percent = 100 * count/n;
	cout<< percent << '\n';
}