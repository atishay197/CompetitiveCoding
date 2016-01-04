#include<iostream>
using namespace std;

int main()
{
    int t,n[2],k[2],a[5],b[5],o[2],q,r;
    cin<<t;
    for(r=0 ; r<t ; r++)
    {
        cin<<n[r]<<k[r];
        for(q=0 ; q < n[r] ; q++)
        {
            cin<<a[q];
        }
        for(q=0 ; q < n[r] ; q++)
        {
            cin<<b[q];
        }
    }
    return 0;
}
