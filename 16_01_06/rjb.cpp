#include <bits/stdc++.h>

void markMultiples(bool arr[], long long int a, long long int n)
{
    long long int i = 2, num;
    while ( (num = i*a) <= n )
    {
        arr[ num-1 ] = 1;
        ++i;
    }
}

int SieveOfEratosthenes(long long int n)
{
	int counter = 0;
    if (n >= 2)
    {
        bool arr[n];
        memset(arr, 0, sizeof(arr));
 
        /* Following property is maintained in the below for loop
           arr[i] == 0 means i + 1 is prime
           arr[i] == 1 means i + 1 is not prime */
        for (long long int i=1; i<n; ++i)
        {
            if ( arr[i] == 0 )
            {
                //(i+1) is prime, print it and mark its multiples
                //printf("%lld, ", i+1);
                counter++;
                markMultiples(arr, i+1, n);
            }
        }
    }
    return counter;
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long int n,c=0,i,j;
		long long int sum,sum1;
		scanf("%lld",&n);
		long long int di = n;
		for(i=0 ; di>=0 ; i++,di -= 4)
		{
			sum = 1;
			sum1 = 1;
			if(i<di)
			{
				for(j=0 ; j<i ; j++)
					sum*=di+i-j;
				for(j=1 ; j<=i ; j++)
					sum1*=j;
				c+=sum/sum1;
			}
			else
			{
				for(j=0 ; j<di ; j++)
					sum*=di+i-j;
				for(j=1 ; j<=di ; j++)
					sum1*=j;
				c+=sum/sum1;
			}
			//printf("%lld %lld %lld\n",i,di,c);
		}
		//printf("%lld\n",c);
		if(c==2)
			printf("1\n");
		else
			printf("%d\n",SieveOfEratosthenes(c));
	}
}
/*

ip

20
34
3
31
35
10
38
18
27
15
3
38
14
18
4
5
23
9
31
10
25

op

3385
0
1432
4522
6
10794
42
462
19
0
10794
15
42
1
2
155
4
1432
6
269

*/

