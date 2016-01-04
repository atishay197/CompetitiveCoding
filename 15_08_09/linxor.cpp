#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        a--;
        long long axor[] = {a,1,a+1,0};
        long long bxor[] = {b,1,b+1,0};
        long long int n = axor[a%4]^bxor[b%4];
        printf("%lld\n",n);
    }
    return 0;
}
