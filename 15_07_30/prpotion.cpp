#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int r,g,b,m,i;
		long long int maxr = 0,maxb = 0,maxg = 0;
		long long int a[1000],max=0;
		scanf("%d %d %d %d" , &r ,&g ,&b ,&m);
		for(i=0 ; i<r ; i++)
		{
			scanf("%lld" , &a[i]);
			if(a[i] > maxr)
				maxr = a[i];
		}
		for(i=0 ; i<g ; i++)
		{
			scanf("%lld" , &a[i]);
			if(a[i] > maxg)
				maxg = a[i];
		}
		for(i=0 ; i<b ; i++)
		{
			scanf("%lld" , &a[i]);
			if(a[i] > maxb)
				maxb = a[i];
		}
		while(m--)
		{
			if(maxr>=maxg && maxr>=maxb)
                maxr/=2;
            else if(maxg>=maxr && maxg>=maxb)
                maxg/=2;
            else
                maxb/=2;
        }
        max=maxr;
        if(maxg>max)
            max=maxg;
        if(maxb>max)
            max=maxb;
        printf("%lld\n" , max);
	}
	return 0;
}
//3 1 1 1 1 1 2 3 1 1 1 1 2 4 6 3 2 2 2 1 2 3 2 4 6 8