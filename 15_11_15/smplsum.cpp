#include <bits/stdc++.h>

int isprime(int n)
{
	int i;
	for(i=2 ; i<=sqrt(n) ; i++)
		if(!(n%i))
			return 0;
	return 1;
}

unsigned int gcd(unsigned int u, unsigned int v)
{
    int shift;
    if (u == 0) return v;
    if (v == 0) return u;
    shift = __builtin_ctz(u | v);
    u >>= __builtin_ctz(u);
    do {
        v >>= __builtin_ctz(v);
        if (u > v) {
            unsigned int t = v;
            v = u;
            u = t;
        }  
        v = v - u;
    } while (v != 0);
    return u << shift;
}
 
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,j,sum=1;
		scanf("%lld",&n);
		if(isprime(n))
			sum+=(n-1)*n;
		else
		{
			for(j=1 ; j<n ; j++)
			{
				sum += (n/gcd(n,j));
				//printf("%lld ",n/gcd(n,j));
			}
			//printf("\n");
		}
		printf("%lld\n",sum);
	}
}