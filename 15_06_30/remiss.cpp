#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,m;
        cin>>a>>b;
        m = a>b?a:b;
        cout<<m<<" "<<(a+b)<<"\n";
    }
}
