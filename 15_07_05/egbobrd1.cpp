#include<iostream>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,a[1000001],bcount=1;
		cin>>n>>k;
		long long int bleft=k;
		for(long long int i=0 ; i<n ; i++)
		{
			cin>>a[i];
			if(bleft>=a[i])
				bleft -= a[i];
			else
			{
				long long int l = (a[i]-bleft)/k;
				if((a[i]-bleft)%k != 0)
					l++;
				bcount += l;
				bleft = bleft + k*l;
				bleft -= a[i];
			}
			if(bleft>0)
				bleft--;
		}
		cout<<bcount<<"\n";
	}
	return 0;
}