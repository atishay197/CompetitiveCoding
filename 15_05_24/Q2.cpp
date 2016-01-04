#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[100000]="",b[100000]="",d[100000]="";
        int countera=1,counterc=0;
        cin>>a;
        int len = strlen(a);
        b[0] = a[0];
        for(int i=1 ; i<len ; i++)
        {
            for(int f=i ; f<len ; f++)
            {
                if(b[i-1] != a[f])
                {
                        b[i] = a[f];
                        a[f] = a[i];
                        countera++;
                        break;
                }
            }
        }
        if(len == countera)
        {
            cout<<b<<"\n";
            return 0;
        }
        else if(len != countera)
        {
        for(int i=len-1 ; i>-1 ; i--)
        {
            for(int f=i ; f>-1 ; f--)
            {
                if(d[i+1] != a[f])
                {
                        d[i] = a[f];
                        a[f] = a[i];
                        counterc++;
                        break;
                }
            }
        }
        if(len == counterc)
            cout<<d<<"\n";
        }
        else
            cout<<-1<<"\n";
    }
    return 0;
}
