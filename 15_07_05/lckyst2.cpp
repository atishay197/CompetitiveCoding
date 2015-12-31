#include<math.h>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
	long long int n,a[1000005];
	cin>>n;
	for(long long int i=0 ; i<n ; i++)
		cin>>a[i];
	for(long long int i=0 ; i<n ; i++)
	{
		if(a[i]%10 == 0)
		{
			cout<<a[i]<<endl;
			continue;
		}
		else if(a[i]%5 == 0)
		{
			cout<<a[i]*4<<endl;
			continue;
		}
		cout<<a[i]<<endl;
	}
}