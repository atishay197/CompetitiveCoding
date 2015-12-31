#include<iostream>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,m,i,j,curmon,maxt = 0,maxnow = 0;
		long long int a[100002],b[100001];
		long long int l[100002],r[100002],c[100002]
		long long int scanme[100002] = {0},removed[100002] = {0};
		int posflag = 1;
		//input begins
		cin>>n>>k>>m;
		curmon = k;
		for(i=1 ; i<=n ; i++)
		{
			cin>>a[i];
			if(a[i]<0)
				posflag = 0;
			b[i] = -1 * a[i];
		}
		for(j=1 ; j<=m ; j++)
		{
			cin>>l[j]>>r[j]>>c[j];
			if(c[j]<k)
				scanme[j] = 1;
		}

		for(j=1 ; j<=m ; j++)
		{
			if(scanme[j] == 1)
			{
				for(i=l[j] ; i<=r[j] ; i++)
				{
					if(!removed[i] && curmon > 0)
					{
						maxnow += b[i];
						if(maxnow<0)
						{
                			maxnow=0;
                			curmon = k;
						}
            			if(maxnow>maxt)
            			{
                			maxt = maxnow;
                			curmon -= c[i];
            			}
					}
				}
			}
		}
		cout<<maxt<<endl;
	}
	return 0;
}