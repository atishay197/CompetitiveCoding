#include<bits/stdc++.h>
using namespace std;
int top=-1,b[50005],sumstack = 0;

int ps(int a[] , int s , int e, int target)
{
	//cout<<"\nTarget : "<<target<<"\n";
	int i;
	if(sumstack == target)
		return 1;
	for(i=s ; i<e ; i++)
	{
		if(sumstack + a[i] <= target)
		{
			b[++top] = a[i];
			sumstack+=a[i];
			//printf("No : %d Sum : %d",a[i],sumstack);
			int k = ps(a,i+1,e,target);
			if(k==1)
				return 1;
			sumstack-=b[top--];
		}
	}
	return 0;
}

int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		int a[5005],n,i,sum=0,half;
		scanf("%d" , &n);
		for(i=0 ; i<n ; i++)
		{
			scanf("%d" , &a[i]);
			sum+= a[i];
		}
		//printf("Sum : %d" , sum);
		if(sum%2 != 0)
		{
			printf("NO\n");
			continue;
		}
		else
		{
			half = sum/2;
			sumstack = 0;
			if(ps(a,0,n,half))
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
}