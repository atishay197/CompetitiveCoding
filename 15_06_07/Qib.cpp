#include<iostream>
using namespace std;

int main()
{
    int A[7] = {1,2,3,4,5,6,7},B = 5,ret[100];
	int n1 = 7;
	B = B%n1;
	int i;
	for (i = B; i < n1; i++)
	    ret[i-B] = A[i];
	for (i = 0; i < B; i++)
	    ret[i+n1-B] = A[i];

	for (i = 0; i < n1; i++)
        cout<<A[i];
    cout<<"\nRET:\n";
    for (i = 0; i < n1; i++)
        cout<<ret[i];
    return 0;
}
