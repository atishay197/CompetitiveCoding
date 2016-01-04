#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int A=0,i,j;
    A = A+1;
    if(A==1)
        return NULL;
    int** a = new int*[A];
    for(i=0; i<A ;i++)
    {
        a[i] = new int[i];
    }
    for(i=0; i<A ;i++)
    {
        for(j=0; j<i ;j++)
        {
            if(j==0)
                a[i][j] = 1;
            if(j==i-1)
                a[i][j] = 1;
            if(j>0 && j<i-1)
                a[i][j] = a[i-1][j]+a[i-1][j-1];
        }
    }
    for(i=0; i<A ;i++)
    {
        cout<<"\n";
        for(j=0;j<i;j++)
            cout<<a[i][j]<<" ";
    }
}
