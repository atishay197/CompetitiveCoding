#include <bits/stdc++.h>

int main()
{
	int k,l;
	double p=0,n=0,z=0;
	scanf("%d",&k);
	for (int i=0 ; i<k ; i++)
	{
		scanf("%d",&l);
		if(l>0)
			p++;
		else if (l<0)
			n++;
		else
			z++;
	}
	printf("%f\n%f\n%f\n",p/k,n/k,z/k);
}