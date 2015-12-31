#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,a[1001] = {0},i,counter = 0;
		string s;
		cin>>n;
		cin>>s;
		if(s[0] == '1')
		{
			a[0] = 1;
			a[1] = 1;
		}
		if(n>1)
		{	
			if(s[n-1] == '1')
			{
				a[n-1] = 1;
				a[n-2] = 1;
			}
		}
		for(i=1 ; i<n-1 ; i++)
		{
			if(s[i] == '1')
			{
				a[i] = 1;
				a[i+1] = 1;
				a[i-1] = 1;
			}
		}
		for(i=0 ; i<n ; i++)
		{
			if(a[i] == 0)
				counter++;
		}
		cout<<counter<<"\n";
	}
	return 0;
}