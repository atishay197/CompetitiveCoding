#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    char str[20],z='0';
    int i,arr[10],r=0,flg,zero;
    int *ptr;
    ptr = &r;
    zero=z;
    //cout<<"Enter shit\n";
    //gets(str);
    cout<<z<<"\n";
    cout<<&z<<"\n";
    cout<<ptr<<"\n";
    cout<<zero;
    //cout<<str;
    /*for(i=0;i<20;i++)
    {
        flg=str[i];
        if(flg!=32)
        {
            arr[r++]=str[i];
            cout<<arr[r];
        }
    cout<<"\n\n";
    }
    for(i=0;i<=r;i++)
    {
        cout<<arr[i];
    }
    */
    return 0;
}
