#include<iostream>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        n /=2;
        cout<<(n * (n-1)/2)<<"\n";
    }
    return 0;
}
