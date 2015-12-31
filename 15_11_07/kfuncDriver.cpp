#include <bits/stdc++.h>

int sumDigits(int no)
{
  return no == 0 ? 0 : no%10 + sumDigits(no/10) ;
}

int main()
{
	int i,j,a[100],b[100];
	int t = 30;
	int d = 4;
	int s = 0;
	int sd = d;
	int sa = s;
	while(sd>=10)
		sd = sumDigits(sd);
	printf("sa:%d sd:%d\n",sa,sd);
	for(i=s ; i<(s+5) ; i++)
	{
		sa = i;
		while(sa>=10)
			sa = sumDigits(sa);
		for(j=0 ; j<t ; j++)
		{
			a[j] = i+d*j;
			b[j] = sumDigits(a[j]);
			while(b[j]>=10)
				b[j] = sumDigits(b[j]);
			printf("%d ",a[j]);
		}
		printf("\n");
		for(j=0 ; j<t ; j++)
		{
			printf("%d ",b[j]);
		}
		printf("\n");
		int k=sa;
		printf("%d ",k);
		for(j=1 ; j<t ; j++)
		{
			k += sd;
			while(k>=10)
				k = sumDigits(k);
			printf("%d ",k);
		}
		printf("\n");
	}
}