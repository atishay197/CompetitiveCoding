#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,i,j,a[150][150] = {0};
	scanf("%d", &n);
	for(i=0 ; i<n ; i++)
	{
		char b[100];
		scanf("%s" , b);
		for(j=0 ; b[j]!= '\0' ; j++)
			a[i][b[j]]++;
	}
	int min = 999;
	for(j=97 ; j<123 ; j++)
	{
		min = 999;
		for(i=0 ; i<n ; i++)
		{
			if(a[i][j] < min)
			{
				min = a[i][j];
				a[n][j] = min;
			}
		}
	}
	//for(j=97 ; j<123 ; j++)
	//{
	//	printf("%d " , a[n][j]);
	//}
	//printf("\n");
	int flag = 0;
	for(j=97 ; j<123 ; j++)
	{
		if(a[n][j] > 0)
			flag = 1;
	}
	if(flag == 1)
	{
		for(j=97 ; j<123 ; j++)
		{
			if(a[n][j] > 0)
			{
				for(i=0 ; i<a[n][j] ; i++)
				{
					char l = j;
					printf("%c", l);
				}
			}			
		}
	}
	else
		printf("no such string");
	printf("\n");
	return 0;
}