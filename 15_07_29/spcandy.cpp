#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		if(m == 0)
			cout<<"0 "<<n<<"\n";
		else
			cout<<n/m<<" "<<n%m<<"\n";
	}
	return 0;
}