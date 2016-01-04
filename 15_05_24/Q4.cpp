#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[100000]="",b[100000]="",c[100000]="",d[100000]="";
        int countera=1,counterc=0;
        cin>>a;
        int len = strlen(a);
        for(int i=0 ; i<len ; i++)
        {
            c[i] = a[i];
        }
        b[0] = a[0];
        d[len-1] = c[len-1];
        for(int i=len-1 ; i>-1 ; i--)
        {
            for(int f=i ; f>-1 ; f--)
            {
                if(d[i+1] != c[f])
                {
                        d[i] = c[f];
                        c[f] = c[i];
                        counterc++;
                        break;
                }
            }
        }
        if(len == countera)
            cout<<b<<"\n";
        if(len == counterc)
            cout<<d<<"\n";
        else
            cout<<-1<<"\n";
    }
    return 0;
}
