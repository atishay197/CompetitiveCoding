#include<iostream>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int num;
    cin>>num;
    int a,b;
    int ans=0;
    int i;
    for(i=1;i<=num;i++)
    {
        cin>>a>>b;
        ans^=i;
    }
    cout<<ans<<"\n";
}
return 0;
}
