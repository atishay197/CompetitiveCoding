	#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
        int n=0,max=-1,a[100005]={0};
        cin>>n;
        for(int i=0 ; i<n ; i++)
        {
			int x;
			cin>>x;
			a[x]++;
			if(a[x]>max)
				max = a[x];
        }
        cout<<n-max<<"\n";
	}
	return 0;
}
