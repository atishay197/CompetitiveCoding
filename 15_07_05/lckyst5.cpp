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
		int powr = 0;
		if(a[i]%5 == 0 && a[i]%10 != 0 || a[i]%25 == 0 && a[i]%100 != 0)
		{
			powr=1;
			if(a[i]%125 == 0 && a[i]%1000 != 0  || a[i]%625 == 0 && a[i]%1000 != 0)
				{
					powr = 2;
					if(a[i]%3125 == 0 && a[i]%10000 != 0 || a[i]%15625 == 0 && a[i]%100000 != 0)
					{
						powr = 3;
						if(a[i]%78125 == 0 && a[i]%100000 != 0 || a[i]%390625 == 0 && a[i]%1000000 != 0)
						{
							powr = 4;
							if(a[i]%1953125 == 0 && a[i]%10000000 != 0 || a[i]%9765625 == 0 && a[i]%10000000 != 0)
							{
								powr = 5;
								if(a[i]%48828125 == 0 && a[i]%100000000 != 0 || a[i]%244140625 == 0 && a[i]%1000000000 != 0)
								{
									powr = 6;
									if(a[i]%1220703125 == 0 && a[i]%10000000000 != 0 || a[i]%6103515625 == 0 && a[i]%10000000000 != 0)
									{
										powr = 7;
									}
								}
							}
						}
					}
				}
			cout<<a[i]*pow(4,powr)<<endl;
			continue;
		}
		cout<<a[i]<<endl;
	}
}