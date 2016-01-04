#include <bits/stdc++.h>
char a[1005];

int splitpossible(int i,int j,int k)
{
	char a1[1005],a2[1005],a3[1005],a4[1005];
	int q,r;
	for(q=0 ; q<i ; q++)
		a1[q] = a[q];
	for(q=i,r=0 ; q<j ; q++,r++)
		a2[r] = a[q];
	for(q=j,r=0 ; q<k ; q++,r++)
		a2[r] = a[q];
	for(q=k,r=0 ; q<strlen(a) ; q++,r++)
		a2[r] = a[q];
	printf("%s %s %s %s\n",a1,a2,a3,a4);
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		int len = strlen(a);
		if(len < 4)
			printf("NO\n");
		else
		{
			for(int i=1 ; i<len-4 ; i++)
			{
				for(int j=i+1 ; j<len-3 ; j++)
				{
					for(int k=j+1 ; j<len-2 ; j++)
					{
						if(splitpossible(i,j,k))
						{
							printf("YES\n");
							goto L;
						}
					}
				}
			}
			printf("NO\n");
		}
		L : int p;
	}
}