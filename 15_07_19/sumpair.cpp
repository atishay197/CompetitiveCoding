#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,d,a[100001],sum=0,i,j,suml[100001]={0};
        cin>>n>>d;
        for(i=0 ; i<n ; i++)
            cin>>a[i];
        for(i=0 ; i<n ; i++)
        {
            for(j=i+1 ; j<n ;j++)
            {
                int larger = a[i]>a[j]?a[i]:a[j];
                int smaller = a[i]<a[j]?a[i]:a[j];
                int maxsum = a[i]+a[j];
                if(larger-smaller < d && suml[i]<maxsum && suml[j]<maxsum)
                {
                    suml[i] = a[i] + a[j];
                    suml[j] = a[i] + a[j];
                    cout<<a[i]<<" "<<a[j]<<"\n";
                }
            }
        }
        for(i=0 ; i<n ; i++)
            sum += suml[i]/2;
        cout<<sum<<"\n";
    }
    return 0;
}//3 3 3 3 5 8 4 3 5 8 10 12 5 3 3 2 8 17 15
