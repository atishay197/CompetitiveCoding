#include<iostream>
using namespace std;

int main()
{
    int A[9] = {-2, 1, 6, 4, -1, 2, 1, -5, 4},n1=9;
    int a[100],b[100],sum=0,i,j,c,maxsum=0;
    for(i=0,c=0 ; i<n1 ; i++)
    {
        if(A[i]>0)
        {
            a[c++]=A[i];
            sum+=A[i];
        }
        else
        {
            c=0;
            sum=0;
        }
        if(sum>maxsum)
        {
            maxsum = sum;
            for(j=0 ; j<c ; j++)
            {
                b[j] = a[j];
            }
        }
    }
    cout<<maxsum<<"\n";
    for(int j=0 ; j<10 ; j++)
        cout<<b[j]<<" ";
    return 0;
}
