#include <bits/stdc++.h>

int main()
{
	int t;
	scanf("%d",&t);
	if(t==0)
		printf("0\n");
	else if (t==1)
		printf("1\n");
	else
	{
		t++;
		long long int k = t/2;
		long long int l = k*(k+1)-1;
		if(t%2)
			printf("%lld\n",l+k+1);
		else
			printf("%lld\n",l);
	}
	return 0;	
}