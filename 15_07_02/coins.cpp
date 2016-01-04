#include<iostream>
using namespace std;

#define maxm 1000001
long long int x[maxm];

long long int max1(long long int a,long long int b)
{
	return a>b?a:b;
}

long long int maxprofit(long long int n)
{
	if(n==0 || n==1)
		return n;
	if(n<maxm && x[n]!=0)
		return x[n];
	else
	{
		long long int k = max1(n,maxprofit(n/2) + maxprofit(n/3) + maxprofit(n/4));
		if(n<maxm)
			x[n] = k;
		return k;
	}
}

int main()
{
	long long int n=1;
	while(cin>>n)
	{
		cout<<maxprofit(n)<<"\n";
	}
	return 0;
}