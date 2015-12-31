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
		int powr = 0,j=1;
		while(true)
		{
			if((a[i]%(long long int)(pow(5,j)) == 0 && a[i]%(long long int)(pow(10,j)) !=0) || (a[i]%25 == 0 && a[i]%(long long int)(pow(10,j+1)) != 0))
			{
				powr++;
				j+=2;
			}
			else
				break;
			cout<<a[i]*pow(4,powr)<<endl;
			continue;
		}
		cout<<a[i]<<endl;
	}
}