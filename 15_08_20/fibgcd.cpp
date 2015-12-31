#include<bits/stdc++.h>
using namespace std;
#define LL long long int

LL gcd(LL a,LL b)
{
	LL r;
	while(1)
	{
		r = a%b;
		if(r==0)
			break;
		a = b;
		b = r;

	}
	return b;
}

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		LL a,b,c,g,f1=0,f2=1;
		scanf("%lld %lld",&a,&b);
		if(a>b)
			g = gcd(a,b);
		else
			g = gcd(b,a);
		if(g==1)
		{
			printf("1\n");
			continue;
		}
		else
		{
			while(g--)
			{
				c = (f1+f2)%(1000000007); 
				f2 = f1;
				f1 = c;
			}
			printf("%lld\n" , c);
		}
	}
}