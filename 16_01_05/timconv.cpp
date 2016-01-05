#include <bits/stdc++.h>

int main()
{
	char a[10];
	scanf("%s",a);
	if((a[8] == 'P' && !(a[0] == '1' && a[1] == '2')) || (a[8] == 'A' && (a[0] == '1' && a[1] == '2')))
	{
		int a1 = a[1] + '0';
		int a0 = a[0] + '0';
		int at = a0*10 + a1 + 12;
		at = at%24;
		a[0] = (char)at/10 + '0';
		a[1] = (char)at%10 + '0';
	}
	a[8] = '\0';
	printf("%s\n",a);
	return 0;
}