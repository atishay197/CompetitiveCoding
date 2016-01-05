#include <bits/stdc++.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[], int l, int h)
{
    int x = arr[h];   
    int i = (l - 1); 
 
    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]);  
    return (i + 1);
}

void quickSort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, h);
    }
}

int main()
{
	char a[100005];
	int c[200] = {0},i,d[30],j=0;
	scanf("%s",a);
	for(i=0 ; i<strlen(a) ; i++)
		c[a[i]]++;
	for(i=97 ; i<123 ; i++)
	{
		if(c[i]>0)
			d[j++] = c[i];
	}
	int distinct = j,t = 0,sti = -1;
	quickSort(d,0,distinct-1);
	for(i=1 ; i<distinct ; i++)
	{
		if(d[i] != d[i-1])
		{
			t++;
			sti = i;
		}
	}
	if(t>1)
		printf("NO\n");
	else if(t==1)
	{
		if(sti == distinct-1 && d[sti] - 1 == d[sti-1])
			printf("YES\n");
		else if(sti == 1 && d[sti-1] == 1)
			printf("YES\n");
		else
			printf("NO\n");
	}
	else
		printf("YES\n");
}