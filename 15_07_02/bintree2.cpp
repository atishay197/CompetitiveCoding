#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int ans=0,n,m;
		cin>>n>>m;
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
	return 0;
}