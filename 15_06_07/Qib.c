#include<iostream>
using namespace std;

int main()
{
    int A = {1,2,3,4,5,6,7},B = 5,ret[100];
	len = 7;
	n1 = len;
	n1 = n1%B;
	int i;
	for (i = B; i < n1; i++)
	    ret[i-B] = A[i];
	for (i = 0; i < B; i++)
	    ret[i+n1-B] = A[i];

	for (i = B; i < n1; i++)
        cout<<ret[i];
}
