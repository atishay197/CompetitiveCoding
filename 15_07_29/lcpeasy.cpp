#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[100001],b[100001];
		int i,j,count = 0;
		scanf("%s",a);
		scanf("%s",b);
		int temp[200] = {0};

		for(i=0 ; a[i] != '\0' ; i++)
			temp[a[i]]++;
		for(i=0 ; b[i] != '\0' ; i++)
		{
			if(temp[b[i]])
			{
		     temp[b[i]]--;
		     count++;
		    }
	    }
		cout<<count<<"\n";
	}
}

//4 abcd xyz abcd bcda aabc acaa Codechef elfedc