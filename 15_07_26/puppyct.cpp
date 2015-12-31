#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,count=0;
		int a[1002][1002] = {0};
		cin>>n>>k;
		if(k>1)
		{
			for(int i=0 ; i<k ; i++)
			{
				int x,y;
				cin>>x>>y;
				a[x][y] = 1;
				//cout<<"right down\n";
				int xc=x,yc=y;
				while(xc<=n && yc<=n)
					a[xc++][yc++] = 1;
				//cout<<"left down\n";
				xc=x,yc=y;
				while(xc>0 && yc<=n)
					a[xc--][yc++] = 1;
				//cout<<"left up\n";
				xc=x,yc=y;
				while(xc>0 && yc>0)
					a[xc--][yc--] = 1;
				//cout<<"right top\n";
				xc=x,yc=y;
				while(xc<=n && yc>0)
					a[xc++][yc--] = 1;
				//cout<<"loop done\n";
			}
			//cout<<"out of loop\n";
			for(int j=1 ; j<=n ; j++)
			{
				for(int l=1 ; l<=n ; l++)
				{
					if(a[j][l] == 1)
						count++;
				}
			}
			int z = (n*n)-count;
			cout<<z<<endl;
		}
		if(k==1)
		{
				int x,y;
				cin>>x>>y;
				int l = x-1;
				int r = n-x;
				int t = y-1;
				int b = n-y;
				int lt = l<t?l:t;
				int rt = r<t?r:t;
				int lb = l<b?l:b;
				int rb = r<b?r:b;
				int sum = (n*n)-(lt+rt+lb+rb+1);
				cout<<sum<<endl;
		}
		if(k==0)
			cout<<n*n<<endl;
	}
	return 0;
}