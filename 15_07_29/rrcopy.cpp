#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,n,a[100001] = {0},x,max=0,count=0;
		cin>>n;
		for(i=0 ; i<n ; i++)
		{
			cin>>x;
			a[x] = 1;
			if(x>max)
				max = x;
		}
		for(i=0 ; i<=max ; i++)
		{
			if(a[i] == 1)
				count++;
		}
		cout<<count<<"\n";
	}
	return 0;
}