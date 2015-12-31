#include<bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,n,a[1000] = {0},s[1000] = {0},count=0,c0;
		scanf("%d",&n);
		for(i=0 ; i<n ; i++)
		{
			scanf("%d",&a[i]);
			if(!s[i])
				s[i] = a[i];
			if(a[i] && i>0)
			{
				s[i-1] = 1;
			}
		}
		//printf("\n");
		//for(j=0 ; j<n ; j++)
		//	printf(" %d",s[j]);
		//printf("\n\n");
		for(i=0 ; i<n-1 ; i++)
		{
			c0 = 0;
			if(!s[i])
			{
				while(!s[i] && i<n-1)
				{
					c0++;
					s[i] = 1;
					i++;
				}
			}
			count += (c0+1)/2;
			//for(j=0 ; j<n ; j++)
			//	printf(" %d",s[j]);
			//printf("\tC : %d\n",count);
		}
		printf("%d\n",count);
	}
}

/*
3 
20
1 0 1 0 0 0 0 1 0 0 0 0 1 0 0 0 1 0 0 0
*/
