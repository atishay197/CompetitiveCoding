#include <bits/stdc++.h>

void printtime(int n,int m)
{
	if(n<10)
		printf("0%d:",(int)n);
	else
		printf("%d:",(int)n);
	if(m<10)
		printf("0%d\n",(int)m);
	else
		printf("%d\n",(int)m);
}

float angle(float h,float m)
{
	float t = 0.5*(60*h-11*m);
	if(t>180)
		t = 360-t;
	if(t>0)
		return t;
	else
		return (-1)*t;;
}

int main()
{
	long long int t;
	scanf("%lld",&t);
	while(t--)
	{
		float n;
		int i,j;
		scanf("%f",&n);
		for(i=0 ; i<12 ; i++)
		{
			for(j=0 ; j<60 ; j++)
			{
				float an = angle(i,j);
				if( ( ((an-0.008333) <= n) && (n <= (an+0.008333)) ) || ( ((360-an-0.008333) <= n) && (n <= (360 - an+0.008333)) ) )
					printtime(i,j);
			}
		}
	}
}