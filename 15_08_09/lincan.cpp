#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		int n,i,sum=0,avg,a[1005];
		scanf("%d" , &n);
		for(i=0 ; i<n ; i++)
		{
			scanf("%d", &a[i]);
			sum += a[i];
		}
		if(sum%n == 0)
		{
			avg = sum/n;
			sum = 0;
			for(i=0 ; i<n ; i++)
			{
				if(a[i] > avg)
					sum += 2*(a[i]-avg);
			}
			printf("%d\n", sum);
		}
		else
			printf("-1\n");;
	}
	return 0;
}
