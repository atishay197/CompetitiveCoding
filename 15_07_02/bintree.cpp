#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,nb,mb;
		long long int n1=0 ,m1=0,i1=1,i2=1,c1=0,c2=0,ans=0;
		cin>>n>>m;
    	while(n>0)
    	{
        	nb=n%2;
        	n1=n1 + (i1*nb);
	        n=n/2;
        	i1=i1*10;
        	c1++;
		}
    	while(m>0)
    	{
        	mb=m%2;
        	m1=m1 + (i2*mb);
	        m=m/2;
        	i2=i2*10;
        	c2++;
		}
		//cout<<n1<<" "<<m1<<"\n";
		//cout<<c1<<" "<<c2<<"\n";
		long long int c = c1<c2?c1:c2;
		for(int i=1 ; i<c ; i++)
		{
			long long int k1  = (long long int)(pow(10,c1-i));
			long long int k2  = (long long int)(pow(10,c2-i));
			//cout<<"\nLoop start\n"<<k1<<" "<<k2<<"\n";
			long long int j1 = n1/k1;
			long long int j2 = m1/k2;
			n1 = n1%k1;
			m1 = m1%k2;
			//cout<<j1<<" "<<j2<<"\nLoop end\n";
			if(j1!=j2)
				break;
			ans++;
		}
		cout<<c1+c2-(2*ans)<<"\n";

	}
	return 0;
}