#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
        long long int a[10005],n,i;
        scanf("%lld" , &n);
        scanf("%lld" , &a[0]);
        long long int a1 = a[0],a2 = 0,maxno = 0;
        for(i=1 ; i<n ; i++)
        {
            scanf("%lld" , &a[i]);
            maxno = a1>a2?a1:a2;
            a1 = a2 + a[i];
            a2 = maxno;
        }
        printf("%lld\n" , a1>a2?a1:a2);
    }
}
