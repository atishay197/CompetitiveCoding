#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int czero(long long int n)
{
	int count = 0;
    while (n % 10 == 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int main()
{
	long long int n,j,a[100005];
	int powr = 0;
	cin>>n;
	for(long long int i=0 ; i<n ; i++)
		cin>>a[i];
	for(long long int i=0 ; i<n ; i++)
	{
		long long int n = a[i];
		long long int m = a[i]*4;
		while(czero(m)>czero(n))
		{
			n = n*4;
			m = m*4;
		}
		cout<<n<<"\n";
	}
	return 0;
}