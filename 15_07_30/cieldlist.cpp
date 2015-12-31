#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int ds,dt,d;
		scanf("%d %d %d",&ds,&dt,&d);
		int max = ds - dt - d;
		int a = dt - ds - d;
		int b = d - ds - dt;
		int c = 0;
		if(a>max)
			max = a;
		if(b>max)
			max = b;
		if(c>max)
			max = c;
		cout<<max<<"\n";
	}
	return 0;
}
//4 15 15 50 15 15 18 43 88 200 2013 2013 2013