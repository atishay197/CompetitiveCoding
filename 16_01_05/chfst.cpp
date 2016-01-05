#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,c,m,sum=0,w=0;
		scanf("%d %d %d",&n,&c,&m);
		sum = n/c;
		w = sum;
		while(w>=m)
		{
			sum+=w/m;
			w = w%m + w/m; 
		}
		printf("%d\n",sum);
	}
}