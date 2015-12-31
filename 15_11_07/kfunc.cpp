#include <bits/stdc++.h>
 
unsigned long long int sumDigits(unsigned long long int no)
{
  return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
}
 
int main()
{
	unsigned long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		unsigned long long int a,d,l,r,sa,sd,nos,total=0,i,totamul=0;
		scanf("%lld %lld %lld %lld",&a,&d,&l,&r);
		//a += (l-1)*d;
		int ls = l%9+9;
		sa = a;
		sd = d;
		nos = r-l;
		total = sa;
		if(l==1)
		{
			while(sa>=10)
				sa = sumDigits(sa);
		}
		else
		{
			for(i=1 ; i<ls ; i++)
			{
				sa += sd;
				while(sa>=10)
					sa = sumDigits(sa);
			}
		}
		while(sd>=10)
			sd = sumDigits(sd);
		//printf("sa:%lld sd:%lld\n",sa,sd);
		if(sd==9)
		{
			printf("%lld\n",(nos+1)*sa);
			continue;
		}
		unsigned long long int totmul = sa;
		for(i=1 ; i<=9 ; i++)
		{
			totmul += sd;
			while(totmul>=10)
				totmul = sumDigits(totmul);
			totamul += totmul;
		}
		int exsum = nos%9;
		unsigned long long int totsum = nos/9;
		totmul = sa;
		total = sa;
		for(i=1 ; i<=exsum ; i++)
		{
			totmul += sd;
			while(totmul>=10)
				totmul = sumDigits(totmul);
			total += totmul;
		}
		total += totamul*totsum;
		printf("%lld\n",total);
	}
}
 