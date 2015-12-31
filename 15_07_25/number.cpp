#include<iostream>
using namespace std;

int main()
{
	int a[101] = {0},j=1,i=0;
		for(i=2 ; i<101 ;i++)
		{
			for(j=1; j<101; j++)
			{
				if(a[j] == 0 && j%i==0)
				{
					a[j] = 1;
					continue;
					cout<<"in 0->1\n";
				}
				if(a[j] == 1 && j%i==0)
				{
					a[j] = 0;
					continue;
					cout<<"in 1->0\n";
				}
			}
			for(j=1 ; j<101 ; j++)
			{
				cout<<a[j]<<" ";
			}
			cout<<"\n\n";
		}
	//for(i=1 ; i<101 ; i++)
	//	cout<<a[i]<<" ";
	return 0;
}
//0 0 0 0 0 0 0 0 0 0