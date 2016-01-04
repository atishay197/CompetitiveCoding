#include<iostream>
using namespace std;
#define m 100
#define p 100

int ArrayGCD(int a[], int first, int last)
{
    int x = 0, y = 0;
    if(first == last)
    {
        x = a[first];
        return x;
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
        return x;
    }
}

int main()
{
    int t,i,n,q,j,a[m],l[m],r[m],b[p][m],k,no,x[m],y,z;
    cin>>t;
    for(i=0 ; i<t ; i++)
    {
        cin>>no>>q;
        for(j=0 ; j<no ; j++)
        {
            cin>>a[j];
        }
        for(n=0 ; n<q ; n++)
        {
            cin>>l[n]>>r[n];
            l[n]--;
            r[n]--;
        }
        for(n=0 ; n<q ; n++)
        {
            for(k=0 , j=0 ; j<no ; j++)
            {
                if(j<l[n] || j>r[n])
                {
                    b[n][k] = a[j];
                    k++;
                }
            }
        }
        cout<<"\n";
        for(n=0 ; n<q ; n++)
        {
            for(k=0 ; k<(no-(r[n]-l[n]+1)) ; k++)
            {
                x[k] = b[n][k];
            }
            y = no-(r[n]-l[n]+1)-1;
            z = ArrayGCD(x,0,y);
            cout<<z<<"\n";
        }
        cout<<"\n";

    }
    return 0;
}
