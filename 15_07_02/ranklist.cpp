#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,s,a;
        cin>>n>>s;
        a = n 	- (1+(int)(sqrt(1-8*(n-s))))/2;
        cout<<a<<"\n";
    }
    return 0;
}
