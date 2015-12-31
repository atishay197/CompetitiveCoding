#include <bits/stdc++.h>

void swap(long long int* a,long long int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void swap(int* a,int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[],long long int sq[], int l, int h)
{
    int x = arr[h];  
    int i = (l - 1);  

    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;
            swap(&arr[i], &arr[j]); 
            swap(&sq[i],&sq[j]);
        }
    }
    swap(&arr[i + 1], &arr[h]); 
    swap(&sq[i+1],&sq[h]); 
    return (i + 1);
}

void quickSort(int arr[],long long int sq[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr,sq, l, h); 
        quickSort(arr,sq, l, p - 1);
        quickSort(arr,sq, p + 1, h);
    }
}

int main()
{
	int n,a[5001],i,j,k;
	long long int sq[5001];
	int counta=0,counto=0,countr=0;
	scanf("%d",&n);
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
		sq[i] = a[i]*a[i];
	}
	quickSort(a,sq,0,n-1);
	/*
	for(i=0 ; i<n ; i++)
		printf("%d ",a[i]);
	printf("\n");
	for(i=0 ; i<n ; i++)
		printf("%lld ",sq[i]);
	*/
	for(i=0 ; i<n-2 ; i++)
	{
		for(j=i+1 ; j<n-1 ; j++)
		{
			for(k=j+1 ; k<n ; k++)
			{
				if(a[i] + a[j] > a[k])
				{
					if(sq[k] > sq[i] + sq[j])
						counto++;
					if(sq[k] < sq[i] + sq[j])
						counta++;
					if(sq[k] == sq[i] + sq[j])
						countr++;
				}
			}
		}
	}
	printf("%d %d %d\n",counta,countr,counto);
}