#include <bits/stdc++.h>
bool c[100000000] = {0};
//0 = Tails

void flip(int a,int b)
{
	int i;
	for(i=a ; i<=b ; i++)
	{
		if(c[i] == 0)
			c[i] = 1;
		else
			c[i] = 0;
	}
}
int main()
{
	int n,q,l,a,b,count,i;
	scanf("%d %d",&n,&q);
	while(q--)
	{
		scanf("%d %d %d",&l,&a,&b);
		if(l==0)
			flip(a,b);
		else
		{
			count = 0;
			for(i=a ; i<=b ; i++)
			{
				if(c[i] == 1)
					count++;
			}
			printf("%d\n",count);
		}
	}
	return 0;
}