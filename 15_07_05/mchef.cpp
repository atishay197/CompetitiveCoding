#include<iostream>
using namespace std;

long long int sindex(long long int array[],long long int lindex , long long int rindex)
{
    long long int a = array[lindex];
    for(long long int i = lindex; i <= rindex; i++)
    {
        if(array[i] < array[index])
            index = i;              
    }
    return a;
}

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int i,j,n,k,m,a[100001],l[100001],r[100001],c[100001];
		int sflag = 1, cflag = 0;
		int aflag[100001] = {0},cflag[100001] = {0};

		//input
		cin>>n>>k>>m;
		for(i=1 ; i<=n ; i++)
		{
			cin>>a[i];
			if(a[i]<0)
				sflag = 0;
		}
		for(j=0 ; j<m ; j++)
		{
			cin>>l[j]>>r[j]>>c[j]];
			if(c[j]<k)
				cflag[j] = 1;
			else
				c1flag = 1
		}

		//output  
		if(sflag || cflag)
			cout<<se;
		else
		{
			long long int ck = k,i,j;
			long long int cscr = 0, scr = 0;

			while(ck>0)
			{

			}

		}

	}
	return 0;
}