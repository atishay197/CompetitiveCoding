#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,f,i,j,k;
		scanf("%d",&n);
		if(n%3 == 0)
		{
			for(i=0 ; i<n ; i++)
				printf("5");
			printf("\n");
			continue;
		}
		f = n - n%3;
		//printf("f = %d\n",f);
		for(i = f ; i>0 ; i-=3)
		{
			k = n-i;
			//printf("k = %d\n",k);
			if(k%5 == 0)
			{
				for(j=0 ; j<i ; j++)
					printf("5");
				for(j=0 ; j<k ; j++)
					printf("3");
				printf("\n");
				goto L;
			}
		}
		if(n%5 == 0)
		{
			for(i=0 ; i<n ; i++)
				printf("3");
			printf("\n");
			continue;
		}
		printf("-1\n");
		L:n=0;
	}
}