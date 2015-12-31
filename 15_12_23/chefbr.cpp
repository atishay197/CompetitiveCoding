#include <bits/stdc++.h>

#define MAX 101
#define MOD 1000000007

int main() 
{
    int a[MAX];
    long long int dp[MAX][MAX] = {{0}};
    int i, j, k, length, n;
    scanf("%d",&n);
    for (i=0; i<n; i++) 
    	scanf("%d",&a[i]);
    for (length = 2; length<=n; length++) 
    {
        for (i=0; i<=n-length; i++) 
        {
            j = i+length-1;
            dp[i][j] = dp[i][j-1];
            if (a[j] < 0) 
            	continue;
            for (k=i; k<j; k++) 
            {
                if (a[k] + a[j] == 0) 
                {
                    if (k == i) 
                    	dp[i][j] = (dp[i][j] + dp[k+1][j] + 1) % MOD;
                    else 
                    	dp[i][j] = (dp[i][j] + (((dp[i][k-1]+1) * (dp[k+1][j]+1)) % MOD)) % MOD;
                }
            }
        }
    }
    dp[0][n-1] = (dp[0][n-1] + 1) % MOD; // null set is also a set
    printf("%lld\n", dp[0][n-1]);
    return 0;
} 