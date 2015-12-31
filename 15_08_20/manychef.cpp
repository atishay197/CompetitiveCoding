#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		char a[2015];
		scanf("%s" , a);
		int i,len = (int)strlen(a);
		for(i=len-1 ; i>-1 ; i--)
		{
			if((i-3>-1)&&(a[i-3]=='?'||a[i-3]=='C')&&(a[i-2]=='?'||a[i-2]=='H')&&(a[i-1]=='?'||a[i-1]=='E')&&(a[i]=='?'||a[i]=='F'))
			{
				a[i-3] = 'C';
				a[i-2] = 'H';
				a[i-1] = 'E';
				a[i] = 'F';
				i-=3;
			}
			else
				if(a[i]=='?')
					a[i] = 'A';
		}
		printf("%s\n",a);
	}
}