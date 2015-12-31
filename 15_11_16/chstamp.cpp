#include <bits/stdc++.h>

int a[200001] = {0};
int b[3][1005] = {0};

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

int suma(int a[].int n)
{
	int i,sum;
	for(i=0 ; i<n ; i++)
		sum += a[i];
	return sum;
}

bool isgreater(int a[],int n,int i,int ins)
{
	int sum = suma(a,n);
	int sum1 = sum - a[i] + ins;
	if(sum1 > sum)
		return true;
		return false;
}

bool solveNQUtil(int a[], int col,int N)
{
	if (col >= N)
		return true;
	for (int i = 0; i < N; i++)
	{
		if ( isgreater(a,N, i,ex) )
		{
			int k = a[i];
			a[i] = ex;
			if ( solveNQUtil(a, col + 1,N) )
				return true;
			a[i] = k;
		}
	}
	return false;
}
bool solveNQ()
{
	int board[10][10];
	printf("Enter Size of n with maximum size of 10:");
	scanf("%d",&N);
	for(int x=0;x<N;x++)
	{
		for(int y=0;y<N;y++)
		{
			board[x][y]=0;
		}
	}
	if ( solveNQUtil(board, 0) == false )
	{
		printf("Solution does not exist");
		return false;
	}
	printSolution(board);
	return true;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,i,j;
		scanf("%d %d",&n,&m);
		for(i=0 ; i<n ; i++)
			scanf("%d",&a[i]);

		for(i=0 ; i<m ; i++)
		{
			scanf("%d %d %d",&b[0][i],&b[1][i],&b[2][i]);
		}

		quickSort(b,0,m-1);

		for(i=0 ; i<m ; i++)
			printf("%d %d %d\n",b[0][i],b[1][i],b[2][i]);

		for(i=m ; i>=0 ; i++)
		{

		}
	}	
}