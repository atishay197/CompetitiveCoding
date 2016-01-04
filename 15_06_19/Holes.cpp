#include<iostream>
#include<string>
using namespace std;

int main()
{
    int t,i;
    string a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int hol=0;
        for(i=0 ; i<a.length() ; i++)
        {
            if(a[i]=='A' || a[i]=='D' || a[i]=='O' || a[i]=='P' || a[i]=='Q' || a[i]=='R')
                hol++;
            else if(a[i]=='B')
                hol+=2;
        }
        cout<<hol<<"\n";
    }
    return 0;
}
