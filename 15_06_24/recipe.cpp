#include<iostream>
using namespace std;

int main()
{
    int t,n,i;
    int a[50];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0 ; i<n ;i++)
        {
            cin>>a[i];

        }
        for(i=0 ; i<n ;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
