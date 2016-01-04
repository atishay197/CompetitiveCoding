#include<iostream>
using namespace std;

int main()
{
    int A[6] = {1,2,3,4,5,6}, n1 = 6,flag=0,i,j,arr[6];
    for(i=0,j=n1-1 ; i<n1 ; i++,j--)
    {
           arr[j]=A[i];
    }


    for(i=0 ; flag==0 ;i++)
    {
        if(arr[i] < 9)
        {
            A[i] = A[i] + 1;
            flag=1;
        }
        else
        {
            A[i] = 0;
        }

        cout<<"Test :"<<A[i]<<"\n";
    }

    for(i=0,j=n1-1 ; i<n1 ; i++,j--)
    {
           A[j]=arr[i];
    }
    for(i=0;i<n1;i++)
        cout<<A[i]<<" ";
}
