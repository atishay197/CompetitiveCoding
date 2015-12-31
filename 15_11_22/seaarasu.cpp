#include <bits/stdc++.h>

void swap(long long int a[], int i,int j)
{
    int t = a[i];
    a[i] = a[j];
    a[j] = t;
}

int partition (long long int arr[], int l, int h)
{
    int x = arr[h];    // pivot
    int i = (l - 1);  // Index of smaller element
 
    for (int j = l; j <= h- 1; j++)
    {
        if (arr[j] <= x)
        {
            i++;    // increment index of smaller element
            swap(arr,i,j);  // Swap current element with index
        }
    }
    swap(arr,i + 1, h);  
    return (i + 1);
}
 
void quickSort(long long int arr[],long long  int l,long long  int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h); /* Partitioning index */
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, h);
    }
}
 
int maxof(int a,int b)
{
	return a>b?a:b;
}

long long int maxsumNonContiguous(long long int array[],long long int n,long long int cond)
{    
    long long int sum1 = array[0];
    long long int sum2 = 0,sum3=0,x;
    for(int i = n-1; i > -1; i--)
    {
        sum3 = maxof(sum1,sum2);
        x = sum2 + array[i];
        if(x<cond)
        	sum1 = x;
        sum2 = sum3;
    }
    return maxof(sum1, sum2);
 }

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,a[100005],i;
		scanf("%lld",&n);
		for(i=0 ; i<n ; i++)
			scanf("%lld",&a[i]);
	    long long int sum=a[0];
	    for(i=n-1 ; i>0 ; i--)
	    {
	    	long long int s = maxsumNonContiguous(a,n,a[i]);
	    	sum += a[i]-s;
	    }
	    printf("%lld\n",sum);
	}
}