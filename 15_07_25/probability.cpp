#include<iostream>
using namespace std;

int main()
{
	float x,y,max=0;
	for(x=0 ; x<51 ; x++)
	{
		for(y=0 ; y<51 ; y++)
		{
			float n = (0.5*(x/(x+y)));
			float m = (0.5*(50-x)/(100-x-y));
			float z = m+n;
			if(z>max)
			{
				max = z;
				cout<<max<<"\n";
			}

		}
	}
	return 0;
}