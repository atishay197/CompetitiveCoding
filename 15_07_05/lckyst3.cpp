#include<math.h>
#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
	long long int n,a[100005];
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
		else
		{
			long long int m = a[i];
			long long int j=0;
			m = m*4;
			while(true)
			{
				j++;
				cout<<"M : "<<m<<"\n";
				if(m%(long long int)(pow(10,j)) != 0)
					break;
				m = m*4;
			}
			cout<<m<<endl;
		}
	}
}