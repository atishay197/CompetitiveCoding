#include <bits/stdc++.h>
#define max 101
bool a[max] = {0};

int main()
{
	int i,j,p;
	for(i=1 ; i<max ; i++)
	{
		if(!a[i])
		{
			for(j=1 ; j<i ; j++)
			{
				double k;
				double l = i*i;
				double m = j*j;
				if(l<m)
					break;
				k = sqrt(l + m);
				if(k>max)
					break;
				int o = (int)k;
				//printf("%d %f %d %d\n",o,k,i,j);
				if(k == o)
				{
					printf("%d %f %d %d\n",o,k,i,j);
					a[o] = 1;
					for(p=1 ; ; p++)
					{
						int r = o*p;
						if(r > max)
							break;
						if(a[o*p] != 1)
							a[o*p] = 1;
					}
					break;
				}
			}
		}
	}
	//printf("Done\n");
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,j,flag = 0;
		scanf("%lld",&n);
		if(a[n])
			printf("YES\n");
		else
			printf("NO\n");
	}
}
/*
100000 = 31021
1000000 = 
*/