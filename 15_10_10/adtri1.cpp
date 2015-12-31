#include <bits/stdc++.h>
#define max 101
bool a[max] = {0};

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,j,i,p,flag = 0;
		double k;
		scanf("%d",&n);
		for(i=1 ; i<max ; i++)
		{
			if(!a[i])
			{
				n = i;
				for(j=1 ; j<i ; j++)
				{
					double l = n*n;
					double m = j*j;
					k = sqrt(l - m);
					int o = (int)k;
					if(k == o)
					{
						printf("%d %f %d %d\n",o,k,i,j);
						for(p=1 ; ; p++)
						{
							int r = n*p;
							//printf("%d\n",r);
							if(r>max)
								break;
							a[r] = 1;
						}
						break;
					}
				}
			}
		}
		for(i=0 ; i<100 ; i++)
		if(a[i])
			printf("%d, ",i);
		//if(a[n])
		//	printf("YES\n");
		//else
		//	printf("NO\n");
	}
}