#include<iostream>
using namespace std;

int main()
{
    int A[3][1] = {{2},{5},{3}};
    int i=0,j=0,n1=3,n2=1,c=0,ret[3],countr=0;;
    int len = n1*n2;
    if(n2==1)
	{
	    for(i=0 ; i<n1 ; i++)
	    {
	        ret[c++] = A[i][0];
	    }
	}
	if(n2==1 && n1==1)
	{
	        ret[c++] = A[0][0];
	}
	for (j=0; j < n2; j++)
	    ret[c++] = A[i][j];
    j--;
    i++;
    n1--;
    n2--;
    while(c<len)
    {

        for (countr=0 ; countr<n1; i++)//down
        {
             ret[c++] = A[i][j];
             countr++;
        }
        n1--;
        i--;
        j--;

        for (countr=0 ; countr<n2; j--)//left
        {
            ret[c++] = A[i][j];
            countr++;
        }
        n2--;
        j++;
        i--;

        for (countr=0 ; countr<n1 ; i--)//up
        {
             ret[c++] = A[i][j];
             countr++;
        }
        n1--;
        i++;
        j++;

        for (countr=0 ; countr<n2 ; j++)//right
        {
             ret[c++] = A[i][j];
             countr++;
        }
        n2--;
        i++;
        j--;
    }

    cout<<"\nRETrt:\n";
    for (i=0; i<len; i++)
        cout<<ret[i]<<" ";
    return 0;
}
