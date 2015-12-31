#include <bits/stdc++.h>

int main()
{
	int i,j,k,n,m,cake=0;
	int a[50] = {0},b[50] = {0};
	for(n=2 ; n<16 ; n++)
	{
		for(m=1 ; m<n ; m++)
		{
			printf("n:%d m:%d ",n,m);
			for(k=0 ; k<n-m ; k++)
			{
				a[k] = k+m+1;
			}
			for(k=n-m ; k<n ; k++)
			{
				a[k] = k-n+m+1;
			}
			//for(i=0 ; i<n ; i++)
			//	printf("%d ",a[i]);
			//printf("\n");
			cake = 0;
			for(i=0 ; i<50 ; i++)
				b[i] = 0;
			for(i=0 ; b[i]!=1 ;)
			{
				b[i] = 1;
				i = a[i]-1;
				cake++;
			}
			printf(" c:%d\n",cake);
		}
	}
}