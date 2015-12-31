#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		char a[100005];
		scanf("%s" , a);
		int b[150] = {0},count = 0,i;
		for(i=0 ; a[i] != '\0' ; i++)
		{
			if(b[a[i]] != 1)
			{
				b[a[i]] = 1;
				count++;
			}
		}
		if(count%2 == 0)
			printf("Terrorist\n");
		else
			printf("Counter Terrorist\n");
	}

}