#include<iostream>
using namespace std;

int main()
{
    int t,n;
    int a[70][70];
    cin>>t;
    while(t--)
    {
        cin>>n;
        int i,j,k,l,maxor=0,cxori=0,cxorj=0;
        for(i=0 ; i<n ;i++)
        {
            for(j=0 ; j<n ; j++)
                cin>>a[i][j];

        }
        for(i=0; i<n-1 ;i++)
        {
            for(j=0 ; j<n-1 ; j++)
            {
                cxori = 0;
                cxorj = 0;
                for(k=i ; k<n ; k++)
                {
                    for(l=j ; l<n ; l++)
                    {
                        cxori ^= a[k][l];
                        cxorj ^= a[k][l];
                        if(maxor < cxori)
                            maxor = cxori;
                        if(maxor < cxorj)
                            maxor = cxorj;
                    }
                }
            }
        }
        cout<<maxor<<"\n";
    }
    return 0;
}
