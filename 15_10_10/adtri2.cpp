#include <bits/stdc++.h>
#define max 5000001

int i,j;
bool a[max] = {0};

void markMultiples(bool arr[], long long int a, long long int n)
{
    long long int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}

void SieveOfEratosthenes(long long int n)
{
    if (n >= 2)
    {
        bool arr[n];
        memset(arr, 0, sizeof(arr));
        for (long long int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples
                int ats = i+1;
                if((ats)%4 == 1)//modification for sum of squares
                {
                    a[ats] = 1;
                    for(j=2 ; ; j++)
					{
						int r = j*ats;
						if(r>max)
							break;
						a[r] = 1;
					}
                }
                markMultiples(arr, i+1, n);
            }
        }
    }
}


int main()
{
	SieveOfEratosthenes(max);
	//printf("Done\n");
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,j,i,p,flag = 0;
		double k;
		scanf("%d",&n);
		if(a[n])
			printf("YES\n");
		else
			printf("NO\n");
	}
}



