#include <bits/stdc++.h>
int visited[2000001]={0};
int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m=-1,a,i,j,ans=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a);
		    if(a>=m)
		    	m=a;
		    visited[a]++;
		}
		//printf("%d\n",m);
		for(i=m;i>=1;i--)
		{
			int cnt=0;
			for(j=i;j<=m;j+=i)
			{
				if(visited[j])
				{
					cnt+=visited[j];
					//printf("%d,%d : %d %d\n",i,j,i*j,cnt);
				}
			}
			if(cnt>=2)
			{
				ans=i;
				break;
			}
		}
		printf("%d\n",ans);
		for(i=0;i<=2000001;i++)
			visited[i]=0;
	}
	return 0;
}
 