#include<iostream>
using namespace std;

int main()
{
    int a;
    float n;
    cin>>a>>n;
    if((a+0.5)<n && a%5 == 0)
        cout<<(n-a-0.5);
    else
        cout<<n;

    return 0;
}

