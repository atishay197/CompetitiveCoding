#include <bits/stdc++.h>
using namespace std;
int giveday(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
int main()
{
	int t;
	scanf("%d" , &t);
	while(t--)
	{
		int d,m,y;
		scanf("%d %d %d",&d,&m,&y);
    	int day = giveday(d, m, y);
    	printf("%d\n",day);
    }
}