#include<stdio.h>
#include<iostream>
#define gc getchar
using namespace std;

    void scanint(long long int &x)
{
    register long long int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main()
{
    long long int t;
    scanint(t);
    while (t--)
    {
        long long int n,o[500],a[500];
        scanint(n);
        for(int j = 0 ; j<n ; j++)
        {
            scanint(a[j]);
        }
        long long int sum = 0;
        for(int j=0 ; j<n ; j++)
        {
            sum += a[j];
        }
        int sum1 = sum;
        for(int j=0 ; j<n-3 ; j++)
        {
            sum1 -= sum1/(n-1);
        }
        for(int j=0 ; j<n ; j++)
        {
            o[j] = (sum1) - ((sum + (n - 1)*a[j])/(n - 1));
            cout<<o[j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
