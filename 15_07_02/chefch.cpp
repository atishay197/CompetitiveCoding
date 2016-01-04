#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string k;
		cin>>k;
		int a = k.length(),count1=0,count2=0;
		for(int i=0 ; i<a ; i++)
		{
			if(i%2 == 0 && k[i] == '-')
				count1++;
			if(i%2 == 1 && k[i] == '+')
				count1++;
			if(i%2 == 0 && k[i] == '+')
				count2++;
			if(i%2 == 1 && k[i] == '-')
				count2++;
		}
		cout<<(count1>count2?count2:count1)<<"\n";
	}
	return 0;
}