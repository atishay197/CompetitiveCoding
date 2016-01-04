#include<iostream>
#include<cstdio>
#include<stdio.h>
#define gc getchar
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
    while(t--)
    {
        long long int a[50005],n,i,ans=0;
        scanint(n);
        for(i=0;i<n;i++)
        {
           scanint(a[i]);
           ans+=a[i];
        }
        ans=ans/(n-1);
        for(i=0;i<n;i++)
        printf("%lld ",ans-a[i]);
        printf("\n");
    }
    return 0;
}
