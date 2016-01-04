#include <iostream>
using namespace std;

int main()
{
    int t;
    long int n[25000],a[50000][50000],o[25000];
    cin>>t;

    for (int i=0 ; i<t ; i++)
    {
        cin>>n[i];
        for(int j = 0 ; j<n[i] ; j++)
        {
            cin>>a[i][j];
        }
    }

    for (int i = 0 ; i<t ; i++)
    {
        int sum = 0;
        for(int j=0 ; j<n[i] ; j++)
        {
            sum+ = a[j];
            o[j] = (sum + (n[i] - 1)*a[i])/a[i];
            cout<<o[j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
