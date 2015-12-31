#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		int n,m,ans=0;
		scanf("%d %d", &n , &m);\
		while(n!=m)
		{
			if(n>m)
				n=n>>1;
			else if(m>n)
				m=m>>1;
			ans++;
		}
		cout<<ans<<"\n";
	}
}