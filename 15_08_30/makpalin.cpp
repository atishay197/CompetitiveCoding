#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char a[100005];
		int i,j=0,len,count=0;
		scanf("%s",a);
		len = strlen(a);
		for(i=0 ; i<len ; i++)
		{
			for(j=0 ; j<len ; j++)
			{
				//printf("%d %d\n",i,j);
				if(i != j)
				{
					printf("%c %c\n",a[i],a[len-i-1]);
					if(a[i] != a[len-i-1]);
						continue;
				}
			}
			count++;
		}
		printf("%d\n",count);
	}

}