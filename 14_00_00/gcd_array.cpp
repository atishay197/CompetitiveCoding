#include<iostream>
using namespace std;

int gcd(int a , int b)
{
    int c;
    if(a<b)
    {
        c = a;
        a = b;
        b = c;
    }
    while(b)
    {
        c = a%b;
        a = b;
        b = c;
    }
    return a;
}

int gcd_a(int siz , int a[])
{
    if(siz == 1)
        return a[0];
    if (siz == 2)
        return gcd(a[0],a[1]);
    int mid = siz/2;
    return gcd(gcd_a(mid , &a[mid-1]),gcd_a(siz-mid , &a[mid]));
}

int ArrayGCD(int *a, int first, int last)
{
    int x = 0, y = 0, gcd = 0;
    if(first == last)
    {
        gcd = a[first];
        return gcd;
    }
    else
    {
        x = ArrayGCD(a,first,(first+last)/2);
        y = ArrayGCD(a,(first+last)/2+1,last);
        if(x < 0)
        {
            x = -x;
        }
        if(y < 0)
        {
            y = -y;
        }
        while(x != y)
        {
            if(x > y)
            {
                x = x-y;
            }
            else
            {
                y = y-x;
            }
        }
        gcd = x;
        return gcd;
    }
}

int main()
{
    int m,n[10] = {2,64};
    m = ArrayGCD(n,0,1);
    cout<<m;
    return 0;
}
