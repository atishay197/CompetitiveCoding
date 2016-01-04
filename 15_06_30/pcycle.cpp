#include<iostream>
using namespace std;

int main()
{
    int n,a[1000],v[1000],i,k,c=0;
    //input
    cin>>n;
    for(i=1 ; i<n+1 ; i++)
    {
        cin>>a[i];
        v[i] = 0;
    }
    //count
    for(i=1 ; i<n+1 ;i++)
    {
        k=i;
        if(v[k] == 0)
        {
            while(a[k] != i)
            {
                v[k] = 1;
                k = a[k];
            }
            v[k]=1;
            c++;
        }
    }
    cout<<c<<"\n";
    //reset visited array
    for(i=1 ; i<n+1 ; i++)
    {
        v[i] = 0;
    }
    //output of cycles
    for(i=1 ; i<n+1 ; i++)
    {
        k=i;
        if(v[k] == 0)
        {
            cout<<k<<" ";
            while(a[k] != i)
            {
                v[k] = 1;
                k = a[k];
                cout<<k<<" ";
            }
            cout<<i<<"\n";
            v[k]=1;
        }
    }
    return 0;
}
