#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,max=0,m=0,i;
		cin>>n>>k;
		for(i=k ; i>1 ; i--)
		{
			m = n%i;
			if(m>max)
				max = m;
		}
		cout<<max<<endl;
	}
}