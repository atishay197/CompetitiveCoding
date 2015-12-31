#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,i,x,a[1000002] = {-1};
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d" , &x);
		if(a[x] == -1)
			a[x] = 1;
		else
			a[x]++;
	}
	for(i=0 ; i<1000002 ; i++)
	{
		if(a[i] != -1)
		{
			while(a[i]--)
				printf("%d\n",i);
		}
	}

}