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
        if (arr[j] >= x)
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
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,a[1001],b[1001],i;
		int flag = 1,sum=0;
		scanf("%d %d",&n,&k);
		for(i=0 ; i<n ; i++)
			scanf("%d",&a[i]);
		for(i=0 ; i<n ; i++)
			scanf("%d",&b[i]);
		quickSort(a,0,n-1);
		quickSort(b,0,n-1);
		for(i=0 ; i<n ; i++)
		{
			sum = a[i] + b[n-i-1];
			if(sum<k)
				flag = 0;
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
}