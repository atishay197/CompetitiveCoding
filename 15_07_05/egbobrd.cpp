#include<iostream>
using namespace std;

int main()
{
	long int t;
	cin>>t;
	while(t--)
	{
		long int n,k,a[1000001],bcount=1;
		cin>>n>>k;
		for(long int i=0 ; i<n ; i++)
		{
			cin>>a[i];
		}
		long int bleft=k;
		for(long int i=0 ; i<n ; i++)
		{
			if(bleft>=a[i])
			{
				bleft -= a[i];
			}
			else
			{
				while(bleft<a[i])
				{
					bleft += k;
					bcount++;
				}
				bleft -= a[i];
			}
			if(bleft>0)
				bleft--;
		}
		cout<<bcount<<"\n";
	}
	return 0;
}