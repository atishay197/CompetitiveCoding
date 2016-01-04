#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0,i=0,counter=1,g=0,flag=1;
        int a[50],b[50];
        cin>>n;
        for(i=0 ; i<n ; i++)
        {
            cin>>a[i];
        }
        for(g=1 ; g<i ; g++)
        {
            flag=1;
            for(int f=0 ; f<g ; f++)
            {
                if(a[f] == a[g])
                {
                    flag=0;
                }
            }
            if(flag == 1)
                counter++;
        }
        cout<<counter<<"\n";
    }
    return 0;
}
