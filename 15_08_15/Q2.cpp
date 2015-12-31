#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long  int t;
	scanf("%lld" , &t);
	while(t--)
	{
		char a[1000005],b[1000005];
		scanf("%s" , a);
		scanf("%s" , b);
		long long int i,count = 0,flag = 1,ab=0;
		if(a[0] == '#' && b[0] == '#')
		{
			cout<<"No\n";
			continue;
		}
		for(i=0 ; a[i] != '\0'  ;i++)
		{
			if(a[i] == '#')
			{
				ab = 1;
				break;
			}	
			if(b[i] == '#')
			{
				ab = 0;
				break;
			}
		}
		for(i=0 ; a[i] != '\0' ;i++)
		{	
			if(flag == 0)
				break;
			//cout<<ab<<"\n";
			if(ab == 0)
			{
				if(a[i] == '.')
					continue;
				if(a[i] == '#')
				{
					if(b[i] == '.')
					{
						count++;
						ab = 1;
						continue;
					}
					if(b[i-1] == '.' && b[i] != '#')
					{
						count++;
						ab = 1;
						continue;
					}
					if(b[i] == '#' || b[i-1] == '#')
					{
						flag = 0;
						break;
					}
				}
			}
			if(ab == 1)
			{
				if(b[i] == '.')
					continue;
				if(b[i] == '#')
				{
					if(a[i] == '.')
					{
						count++;
						ab = 0;
						continue;
					}
					if(a[i-1] == '.' && a[i] != '#')
					{
						count++;
						ab = 0;
						continue;
					}
					if(a[i] == '#' || a[i-1] == '#')
					{
						flag = 0;
						break;
					}
				}
			}
		}
		if(flag == 1)
		{
			cout<<"Yes\n"<<count<<endl;
		}
		else
			cout<<"No"<<endl;
	}
}