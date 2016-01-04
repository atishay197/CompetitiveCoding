#include<iostream>
using namespace std;

int main()
{
    int t,n,i,j;
    int a[100][100];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
                for(j=0 ; j<=i ;j++)
                {
                    cin>>a[i][j];
                }
        }
        for(i=n-1 ; i>0 ; i--)
        {
            for(j=0;j<i;j++)
                a[i-1][j] += a[i][j]>a[i][j+1]?a[i][j]:a[i][j+1];
        }
        cout<<a[0][0]<<"\n";
    }
    return 0;
}
