#include<iostream>
using namespace std;
#define m 100000

int main()
{
    long int t,a[m],b[m],o[m],q,r,s,x[m],y[m];
    long int n[5],k[5];
    cin>>t;
    for(r=0 ; r<t ; r++)
    {
        cin>>n[r]>>k[r];
        for(q=0 ; q < n[r] ; q++)
        {
            cin>>a[q];
        }
        for(q=0 ; q < n[r] ; q++)
        {
            cin>>b[q];
        }
        for(q=0 ; q < n[r] ; q++)
        {
            for (s=1 ; s<m ; s++)
            {
                if(x[q]>k[r])
                {
                    break;
                }
                else
                {
                    x[q] = s*a[q];
                }
            }
            x[q] = s-2;
        }
        for(q=0 ; q < n[r] ; q++)
        {
            y[q] = x[q] * b[q];
        }
        cout<<"\n";
        o[r] = y[0];
        for(q=0 ; q < n[r] ; q++)
        {
            if(o[r] < x[q])
                o[r] = x[q];
        }
    }
    for(r=0 ; r<t ; r++)
    {
        cout<<o[r]<<endl;
    }
    return 0;
}
