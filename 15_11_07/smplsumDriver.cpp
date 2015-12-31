#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
using namespace std;

int gcd(int a,int b)
{
	return (b != 0)? gcd(b, a % b): a;
}
int main()
{
	int n,j,sum=0;
	ofstream myfile;
  	myfile.open ("example.txt");
	for(n=1 ; n<105 ; n++)
	{
		sum = 0;
		for(j=1 ; j<=n ; j++)
		{
			sum += (n/gcd(j,n));
			printf("%d %d\n",n/gcd(j,n),gcd(j,n));
		}
  		myfile <<sum<<",";
	}
    myfile.close();
}