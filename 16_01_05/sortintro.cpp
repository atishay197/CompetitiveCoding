#include <bits/stdc++.h>

int main()
{
	int t,n,i,a[1005],out;
	scanf("%d %d",&t,&n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
		if(a[i] == t)
			out = i;
	}
	printf("%d\n",out);
}