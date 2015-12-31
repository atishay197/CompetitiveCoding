#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		int n,h,a,b,i,j,k,count,mincount = 99999;
		bool maze[105][105] = {0};
		scanf("%d %d",&n,&h);
		for(i=0 ; i<n ; i++)
		{
			scanf("%d %d" , &a,&b);
			for(j=a ; j<= b ; j++)
				maze[i][j]=1;
		}
		for(j=0 ; j<n ; j++)
		{
			count = 0;
			for(k=j ; k<j+h ; k++)
			{
				for(i=0 ; i<n ; i++)
				{
					if(maze[i][k] == 0)
						count++;
				}
			}
			if(mincount > count)
			{
				mincount = count;
			}
		}
		cout<<mincount<<"\n";
	}
}