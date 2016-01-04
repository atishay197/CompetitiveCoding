#include<iostream>
using namespace std;

int main()
{
    long int t,n,m,i,j;
    long int a[100000];
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=2 ; i<m+1 ; i++)
        {
            for(j = i*i ; j<m+1 ; j+=i)
            {
                a[j-1] = 1;
            }
        }
        for (int i=n ; i<m+1; i++)
        {
            if (a[i-1] == 0)
                cout<<i<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}

