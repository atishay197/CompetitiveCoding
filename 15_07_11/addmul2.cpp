#include <stdio.h>
using namespace std;

int readInt () {
  bool minus = false;
  int result = 0;
  char ch;
  ch = getchar();
  while (true) {
    if (ch == '-') break;
    if (ch >= '0' && ch <= '9') break;
    ch = getchar();
  }
  if (ch == '-') minus = true; else result = ch-'0';
  while (true) {
    ch = getchar();
    if (ch < '0' || ch > '9') break;
    result = result*10 + (ch - '0');
  }
  if (minus)
    return -result;
  else
    return result;
}

int main()
{
	long long int n,q,i=1,j,a[100002],q1,x,y,v,m = 1000000007,sum=0;
	n = readInt();
	q = readInt();

	while(n--)
	{
		a[i] = readInt();
		
	}
	while(q--)
	{
		q1 = readInt();
		x = readInt();
		y = readInt();
		switch(q1)
		{
			case 1:
			{
				v = readInt();
				sum += (y-x+1)*v;
				for(j=x ; j<= y ; j++)
				{
					a[j] += v;
				}
				break;
			}
			case 2:
			{
				v = readInt();
				for(j=x ; j<= y ; j++)
				{
					sum += a[j]*(v-1);
					a[j] = a[j]*v;
				}
				break;
			}	
			case 3:
			{
				v = readInt();
				for(j=x ; j<= y ; j++)
				{	
					sum += a[j]-v;
					a[j] = v;
				}
				break;
			}	
			case 4:
			{
				printf("%lld\n",sum);
				break;
			}
		}
	}
	return 0;
}
//4 4 1 2 3 4 4 1 4 1 1 3 10 2 2 4 2 4 1 4