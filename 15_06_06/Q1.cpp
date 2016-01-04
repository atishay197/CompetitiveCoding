#include<iostream>
using namespace std;

int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        long int n=0,sum=0,i=0,g=0;
        long int a[100000];
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        sum = a[0];
        for(g=1 ; g<n ; g++)
        {
            if((a[g]-a[g-1])>0)
            {
                sum += (a[g]-a[g-1]);
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}
