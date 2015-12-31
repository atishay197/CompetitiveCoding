#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,a,min,flag=0,gdiff=0;
		scanf("%d",&n);
		scanf("%d",&a);
		min = a;
		for(i=1 ; i<n ; i++)
		{
			scanf("%d",&a);
			if(a-min>gdiff)
			{
				gdiff = a-min;
				flag = 1;
			}
			if(a<min)
				min = a;
		}
		if(flag == 0)
			printf("UNFIT\n");
		else
			printf("%d\n",gdiff);
	}
	return 0;
}
//	