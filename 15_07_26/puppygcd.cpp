#include <iostream>
using namespace std;

int gcd(int a , int b)
{
    int c;
    if(a<b)
    {
        c = a;
        a = b;
        b = c;
    }
    while(b)
    {
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,d,count=0;
		cin>>n>>d;
		for(int i=1 ; i<=n ; i++)
		{
			for(int j=1 ; j<=i ; j++)
			{
				if(gcd(i,j) == d)
				{
					//cout<<i<<" "<<j<<endl;
					count++;
				}
			}
		}
		cout<<count<<endl;
	}
	return 0;
}