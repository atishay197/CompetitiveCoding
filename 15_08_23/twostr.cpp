#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		int i,flag=1;
		char a[15],b[15];
		scanf("%s %s", a, b);
		for(i=0 ; a[i] != '\0' ; i++)
		{
			if((a[i] == '?') || (b[i] == '?'))
				continue;
			else if(a[i] != b[i])
			{
				flag = 0;
				break;
			}
		}
		if(flag == 0)
			printf("No\n");
		else
			printf("Yes\n");
		
	}

}