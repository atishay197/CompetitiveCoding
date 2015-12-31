#include <bits/stdc++.h>

void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int partition (int arr[3][1005], int l, int h)
{
    int x = arr[0][h];  
    int i = (l - 1);
 
    for (int j = l; j <= h- 1; j++)
    { 
        if (arr[0][j] <= x)
        {
            i++;
            swap(&arr[0][i], &arr[0][j]);
            swap(&arr[1][i], &arr[1][j]);
            swap(&arr[2][i], &arr[2][j]);
        }
    }
    swap(&arr[0][i + 1], &arr[0][h]);  
    swap(&arr[1][i + 1], &arr[1][h]);  
    swap(&arr[2][i + 1], &arr[2][h]);  
    return (i + 1);
}
 
void quickSort(int arr[3][1005], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        quickSort(arr, l, p - 1);
        quickSort(arr, p + 1, h);
    }
}


void merge(int arr[3][1005], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[3][n1], R[3][n2];
 
    for(i = 0; i < n1; i++)
    {
        L[0][i] = arr[0][l + i];
        L[1][i] = arr[1][l + i];
        L[2][i] = arr[2][l + i];
    }
    for(j = 0; j < n2; j++)
    {
        R[0][j] = arr[0][m + 1+ j];
        R[1][j] = arr[1][m + 1+ j];
        R[2][j] = arr[2][m + 1+ j];
    }
 
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[1][i] <= R[1][j])
        {
            arr[1][k] = L[1][i];
            arr[0][k] = L[0][i];
            arr[2][k] = L[2][i];
            i++;
        }
        else
        {
            arr[0][k] = R[0][j];
            arr[1][k] = R[1][j];
            arr[2][k] = R[2][j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[0][k] = L[0][i];
        arr[1][k] = L[1][i];
        arr[2][k] = L[2][i];
        i++;
        k++;
    }
 
    while (j < n2)
    {
        arr[0][k] = R[0][j];
        arr[1][k] = R[1][j];
        arr[2][k] = R[2][j];
        j++;
        k++;
    }
}

void mergeSort(int arr[3][1005], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2; //Same as (l+r)/2, but avoids overflow for large l and h
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

void bubble_sort(int list[3][1005], int n)
{
  int c, d, t;
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if ((list[1][d] > list[1][d+1]) && (list[0][d] == list[0][d+1]))
      {
			swap(&list[0][d], &list[0][d+1]);  
			swap(&list[1][d], &list[1][d+1]);  
			swap(&list[2][d], &list[2][d+1]); 
      }
    }
  }
}

int suma(int a[],int n)
{
	int i,sum=0;
	for(i=0 ; i<n ; i++)
		sum += a[i];
	return sum;
}

int c[200001];

int ispresent(int a[],int x,int n)
{
	int i,flag = 0,k=0;

	for(i=0 ; i<200001 ; i++)
		c[i] = 0;
	for(i=0 ; i<n ; i++)
	{
		if(a[i] == x)
		{
			c[k++] = i;
			flag++;
		}
	}
	return flag;

}

int bctrk(int s,int a[],int b[3][1005],int n,int m,int csum)
{
	int i,k;
	for(i=s ; i<m ; i++)
		{
			int pr = ispresent(a,b[1][i],n);
			for(k=0 ; k<pr ; k++)
			{
				int prtemp = c[k];
				if(b[2][prtemp] > a[prtemp])
				{
					int atemp = a[prtemp];
					a[prtemp] = b[2][i];
					int sc = suma(a,n);
					if(sc > csum)
						csum = sc;
					csum = bctrk(ie,a,b,n,m,csum); 
					csum = bctrk(i+1,a,b,n,m,csum);
					a[prtemp] = atemp;
				}
			}
		}
	return csum;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,i,j;
		int a[200001] = {0};
		int b[3][1005] = {0};
		int csum = 0;
		scanf("%d %d",&n,&m);
		for(i=0 ; i<n ; i++)
			scanf("%d",&a[i]);

		for(i=0 ; i<m ; i++)
		{
			scanf("%d %d %d",&b[0][i],&b[1][i],&b[2][i]);
			if(b[1][i] > b[2][i])
				swap(&b[1][i],&b[2][i]);
		}

		quickSort(b,0,m-1);
		mergeSort(b,0,m-1);
		csum = bctrk(0,a,b,n,m,csum);
		printf("%d\n",csum);
	}	
}