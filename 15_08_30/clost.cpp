#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,p1,p2,diff,k,i;
		char a[2005] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
		scanf("%d %d",&n,&k);
		for(i=0 ; i<k ; i++)
		{
			scanf("%d %d",&p1,&p2);
			a[p1] = '(';
			a[p2] = ')';
		}
		diff = n-2*k;
		k = diff/2;
		if(diff > 0)
		{
			for(i=0 ; i<n ; i++)
			{
				if((int)a[i] == 40 || (int)a[i] == 41)
					continue;
				if(k>0)
					a[i] = '(';
				else
					a[i] = ')';
				k--;
			}
		}
		for(i=0 ; i<n ; i++)
		{
			printf("%c",a[i]);
		}
		printf("\n");
	}
}