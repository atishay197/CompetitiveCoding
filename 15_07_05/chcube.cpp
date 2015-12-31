#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a0,a1,a2,a3,a4,a5;
        cin>>a0;
        cin>>a1;
        cin>>a2;
        cin>>a3;
        cin>>a4;
        cin>>a5;
        int flag=0;
        if(a0 == a2 && a2 == a4)
            flag = 1;
        if(a1 == a2 && a2 == a4)
            flag = 1;
        if(a0 == a2 && a2 == a5)
            flag = 1;
        if(a1 == a2 && a2 == a5)
            flag = 1;
        if(a0 == a4 && a4 == a3)
            flag = 1;
        if(a1 == a4 && a4 == a3)
            flag = 1;
        if(a0 == a5 && a5 == a3)
            flag = 1;
        if(a1 == a5 && a5 == a3)
            flag = 1;
        if(flag == 1)
        	cout<<"YES\n";
        else
        	cout<<"NO\n";
    }
    return 0;
}
