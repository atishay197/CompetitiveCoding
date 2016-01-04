#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,i1,m,x,y,a,marker[101]={0},l,r,k=100,counter = 0;
        cin>>m>>x>>y;
        int j = x*y;
        for (i=0 ; i<m ; i++)
        {
            cin>>a;
            l = (a-j)>1?(a-j):1;
            r = (a+j)<100?(a+j):100;
            for(i1 = l ; i1<=r ; i1++)
                marker[i1] = 1;
        }
        for(int i=1 ; i<=101 ; i++)
        {
            if(marker[i] == 0)
                counter++;
        }
        cout<<counter<<"\n";
    }
    return 0;
}//3 4 7 8 12 52 56 8 2 10 2 21 75 2 5 8 10 51
