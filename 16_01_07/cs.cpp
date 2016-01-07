#include <bits/stdc++.h>

int main()
{
	int n,x,i,ar[101] = {0},j,k;
	char a[10],b[101][80001],bf[101] = {0};
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d %s",&x,a);
		if(i<n/2)
			ar[x]++;
		else
		{
			j=0;
			k=0;
			if(bf)
			{
				while(b[x][k] != '\0')
					k++;
				b[x][k++] = ' ';
				while(1)
				{
					b[x][k] = a[j];
					if(a[j] == '\0')
						break;
					j++;
					k++;
				}
			}
			else
			{
				bf[x] = 1;
				while(1)
				{
					b[x][j] = a[j];
					if(a[j] == '\0')
						break;
					j++;
				}
			}
		}
	}
	// printf("\n\n");
	// for(i=0 ; i<10 ; i++)
	// 	printf("%d--%s\n",ar[i],b[i]);
	// printf("\n\n");
	int f=1;
	for(i=0 ; i<101 ; i++)
	{
		while(ar[i]--)
		{
			if(f)
			{
				printf("-");
				f = 0;
			}
			else
				printf(" -");
		}
		printf("%s",b[i]);
	}
	printf("\n");
}

/*
20
0 ab
6 cd
0 ef
6 gh
4 ij
0 ab
6 cd
0 ef
6 gh
0 ij
4 that
3 be
0 to
1 be
5 question
1 or
2 not
4 is
2 to
4 the

*/