#include <bits/stdc++.h>

int main()
{
	long long int table[255] = {0},S[255];
	long long int n,m,i,j;
	scanf("%lld %lld",&n,&m);
	for(i=0 ; i<m ; i++)
		scanf("%lld",&S[i]);
	table[0] = 1;
	for(i=0 ; i<m ; i++)
	{
		for(j=S[i] ; j<=n ; j++)
			table[j] += table[j-S[i]];
	}
	printf("%lld\n",table[n]);
}