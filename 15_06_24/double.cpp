#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2)
            cout<<n-1;
        else
            cout<<n;
        cout<<"\n";
    }
    return 0;
}
