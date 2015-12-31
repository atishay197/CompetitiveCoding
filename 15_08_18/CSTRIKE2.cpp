#include<bits/stdc++.h>
using namespace std;

int GCD(int a, int b)
{
    while(b) b ^= a ^= b ^= a %= b;
    return a;
}

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		int n,i,j,gcd,maxgcd = 1,a[100005];
		scanf("%d" , &n);
		for(i=0 ; i<n ; i++)
		{
			scanf("%d" , &a[i]);
			if(i>0)
			{
				for(j=i-1 ; j>=0 ; j--)
				{
					gcd = GCD(a[i],a[j]);
					if(gcd>maxgcd)
						maxgcd = gcd;
				}
			}
		}
		printf("%d\n" , maxgcd);
	}

}