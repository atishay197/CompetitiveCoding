#include <bits/stdc++.h>

int isprime(int n)
{
	int i;
	for(i=2 ; i<sqrt(n) ; i++)
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
	long long int n,j,sum=0;
	for(n=1; n<30 ; n++)
	{
		sum = 0;
		//printf("%lld\n",n);
		for(j=1 ; j<=n ; j++)
			//printf("%lld\t",j);
		//printf("\n");
		for(j=1 ; j<=n ; j++)
		{
			sum += (n/gcd(j,n));
			//printf("%lld\t",n/gcd(j,n));
		}
		printf("%lld,",sum);
	}
}
//1000 : 0.07
//2000 : 0.14
//3000 : 0.24
//4000 : 0.35
//5000 : 0.46
//6000 : 0.60
//7000 : 0.74
//8000 : 0.87
//9000 : 0.95
//10000 : 1.00
