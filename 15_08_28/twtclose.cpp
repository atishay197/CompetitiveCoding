#include<bits/stdc++.h>
using namespace std;
bool z[1005] = {0};

int main()
{
	int n,k,x,i,count=0;
	char a[100];
	scanf("%d %d",&n,&k);
	while(k--)
	{
		scanf("%s",a);
		if(a[2] == 'I')
		{
			scanf("%d",&x);
			if(z[x-1])
				count--;
			else
				count++;
			z[x-1] = !z[x-1];
		}
		if(a[2] == 'O')
		{
			for(i=0 ; i<n ; i++)
				z[i] = 0;
			count = 0;
		}
		printf("%d\n",count);
	}
	return 0;
}