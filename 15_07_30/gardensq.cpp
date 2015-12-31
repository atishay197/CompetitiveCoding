#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		long long int n,m,i,j,k,count = 0;
		scanf("%d %d", &n,&m);
		char a[101][101];
		for(i=0 ; i<n ; i++)
				scanf("%s" , a[i]);
		for(i=0 ; i<n ; i++)
		{
			for(j=0 ; j<m ; j++)
			{
				for(k=1 ; k+i<n && k+j<m ; k++)
				{
					if((a[i][j] == a[i+k][j+k]) && (a[i][j] == a[i][j+k]) && (a[i][j] == a[i+k][j]))
						count++;
				}
			}
		}
		printf("%d\n" , count);
	}
	return 0;
}