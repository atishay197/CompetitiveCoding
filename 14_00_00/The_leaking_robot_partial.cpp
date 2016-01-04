#include<iostream>
using namespace std;

int main()
{
    long int t,n = 2,k = 0,l = 0,i = 0,j = 1,a[2][100000],b,c,p = 1;
    a[0][0] = 0;
    a[1][0] = 0;
    i = 1;

    for(int m = 0 ; m < p ; m++)
    {

        /*East loop*/
        for(j = 1 ; i < n ; i++,j++)
        {
            k++;
            a[0][i] = k;
            a[1][i] = l;
        }
        n = i + j;

        /*North loop*/
        for(j = 1 ; i < n ; i++,j++)
        {
            l++;
            a[0][i] = k;
            a[1][i] = l;
        }
        n = i + j;

        /*West loop*/
        for( j = 1 ; i < n ; i++,j++)
        {
            k--;
            a[0][i] = k;
            a[1][i] = l;
        }
        n = i + j;

        /*South loop*/
        for( j = 1 ; i < n ; i++,j++)
        {
            l--;
            a[0][i] = k;
            a[1][i] = l;
        }
        n = i + j;
    }
    n = i;
    for(int j = 0 ; j < n ; j++)
    {
        cout<<a[0][j]<<" "<<a[1][j]<<"\n";
    }
}
