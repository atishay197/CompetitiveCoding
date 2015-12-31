#include <bits/stdc++.h>
#define MAX 500
unsigned int gc[MAX][MAX] = {0};

unsigned int gcd(unsigned int u, unsigned int v)
{
	if(u<MAX && v<MAX)
	{
		if(gc[u][v] != 0)
			return gc[u][v];
	}
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
	int i,j;
	for(i=0 ; i<MAX ; i++)
	{
		for(j=i ; j<MAX ; j++)
		{
			gc[j][i] =  gcd(j,i);
			gc[i][j] = gc[i][j];
		}
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,j,sum=0,l;
		scanf("%lld",&n);
		for(j=1 ; j<=n ; j++)
		{
			if(j<MAX && n<MAX)
			{
				if(gc[j][n] == 0)
				{
					l = gcd(j,n);
					gc[j][n] = l;
				}
				else
					l = gc[j][n];
			}
			else
				l = gcd(j,n);
			sum += (n/l);
		}
		printf("%lld\n",sum);
	}
}