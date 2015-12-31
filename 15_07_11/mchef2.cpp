#include<iostream>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,m,i,j,curmon,maxt = 0,maxnow;
		long long int a[100002],b[100002],pos[100002] = {0};
		long long int l[100002],r[100002],c[100002];
		long long int scanme[100002] = {0},removed[100002] = {0};
		
		//input begins
		cin>>n>>k>>m;
		for(i=1 ; i<=n ; i++)
		{
			cin>>a[i];
			if(a[i]<0)
				pos[i] = 1;
			b[i] = -1 * a[i];
		}
		for(j=1 ; j<=m ; j++)
		{
			cin>>l[j]>>r[j]>>c[j];
			if(c[j]<=k)
				scanme[j] = 1;
		}

		for(j=1 ; j<=m ; j++)
		{
			curmon = k;
			maxnow = 0;
			cout<<"Loop "<<j<<endl;
			if(scanme[j] == 1)
			{
				for(i=l[j] ; i<=r[j] ; i++)
				{
					cout<<"pos[i] "<<pos[i]<<" curmon "<<curmon<<" removed "<<removed[i]<<endl;
					if(!removed[i] && curmon>=c[j] && pos[i])
					{
						cout<<"Maxnow : "<<maxnow<<" Maxt : "<<maxt;
						cout<<" b[i] : "<<b[i]<<endl;
						maxnow += b[i];
						if(maxnow<0)
						{
                			maxnow=0;
                			curmon = k;
						}
            			if(maxnow>maxt && curmon>=c[j])
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
//1 5 10 5 10 -2 -5 7 -10 1 1 5 2 4 10 4 4 12 3 4 10 1 5 15