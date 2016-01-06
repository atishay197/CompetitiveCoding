#include <bits/stdc++.h>

long long int fact(int n)
{
	long long int s=1;
	while(n>0)
		s *= n--; 
	return s;
}

int main()
{
	for(int i=0 ; i<41 ; i++)
		printf("%lld,",fact(i));
}