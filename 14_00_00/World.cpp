#include <iostream>
using namespace std;

int main()
{
    int a[1000],i;
    for(i=0 ;; i++)
    {
            cin>>a[i];
            if(a[i] == 42)
                break;
    }
    for(int f=0 ; f<i; f++)
    {
            cout<<a[f]<<"\n";
    }
    return 0;
}
