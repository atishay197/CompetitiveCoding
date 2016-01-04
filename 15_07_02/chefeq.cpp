#include<iostream>
using namespace std;

float findmax(float a[],int n)
{
	int i,m = 0;
	for(i=0 ; i<n ; i++)
	{
		if(m<a[i])
			m = a[i];
	}
	return m;
}

float findmin(float a[],int n)
{
	int i,m = 100000;
	for(i=0 ; i<n ; i++)
	{
		if(m>a[i])
			m = a[i];
	}
	return m;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		float a[10000],sum=0;
		int n,i,countr=0;
		cin>>n;
		for(i=0 ; i<n ; i++)
			cin>>a[i];
		float amin = findmin(a,n);
		float amax = findmax(a,n);
		float avg = (amin+amax)/2;
		for(i=0 ; i<n ; i++)
		{
			sum+=a[i];
		}
		float aavg = sum/n;
		//cout<<amin<<" "<<amax<<" "<<aavg<<" "<<avg<<"\n";
		if(aavg < avg)
		{
			//cout<<"min : ";
			for(i=0 ; i<n ; i++)
			{
				if(a[i] != (int)amin)
					countr++;
			}
		}
		else
		{
			//cout<<"max : ";
			for(i=0 ; i<n ; i++)
			{
				if(a[i] != (int)amax)
					countr++;
			}
		}
		cout<<countr<<"\n";
	}
	return 0;
}
