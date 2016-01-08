#include <bits/stdc++.h>
using namespace std;

int pc (int n,int a[100001], map< int, int > m, int diff) 
{
	int result = 0,i;
	for (i=0 ; i<n ; i++) {
		if (m [abs (a[i] + diff)] == 1) 
			result++;
	}
	return result;
}

int main()
{
	int n,k,i,count=0;
	map< int, int > m;
	int b[100001];
	scanf("%d %d",&n,&k);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&b[i]);
		m[b[i]] = 1;
	}
	printf("%d\n",pc(n,b,m,k));
}