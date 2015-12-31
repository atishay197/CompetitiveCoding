#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,i;
		int b[10001] = {0}, a[100];
		cin>>n;
		for(i=0 ; i<n ; i++)
		{
			cin>>a[i];
			b[a[i]]++;
		}
		int maxcount = 0,maxno = 0;
		for(i=0 ; i<10001 ; i++)
		{
			if(b[i] > maxcount)
			{
				maxcount = b[i];
				maxno = i;
			}
		}
		cout<<maxno<<" "<<maxcount<<"\n";
	}
	return 0;
}