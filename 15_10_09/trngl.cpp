#include <bits/stdc++.h>

int main()
{
	int i,n,j;
	float k;
	for(i=1 ; i<100 ; i++)
	{
		for(j=1 ; j<i ; j++)
		{
			k = sqrt(i*i - j*j);
			//printf("%d, %d, %f\n,",i,2*j,k);
			if(k == (int)k)
				printf("%d %d : %d\n",i,j,(int)k);
		}
	}
}

/*
5 3 : 4
5 4 : 3
10 6 : 8
10 8 : 6
13 5 : 12
13 12 : 5
15 9 : 12
15 12 : 9
17 8 : 15
17 15 : 8
20 12 : 16
20 16 : 12
25 7 : 24
25 15 : 20
25 20 : 15
25 24 : 7
26 10 : 24
26 24 : 10
29 20 : 21
29 21 : 20
30 18 : 24
30 24 : 18
34 16 : 30
34 30 : 16
35 21 : 28
35 28 : 21
37 12 : 35
37 35 : 12
39 15 : 36
39 36 : 15
40 24 : 32
40 32 : 24
41 9 : 40
41 40 : 9
45 27 : 36
45 36 : 27
50 14 : 48
50 30 : 40
50 40 : 30
50 48 : 14
51 24 : 45
51 45 : 24
52 20 : 48
52 48 : 20
53 28 : 45
53 45 : 28
55 33 : 44
55 44 : 33
58 40 : 42
58 42 : 40
60 36 : 48
60 48 : 36
61 11 : 60
61 60 : 11
65 16 : 63
65 25 : 60
65 33 : 56
65 39 : 52
65 52 : 39
65 56 : 33
65 60 : 25
65 63 : 16
68 32 : 60
68 60 : 32
70 42 : 56
70 56 : 42
73 48 : 55
73 55 : 48
74 24 : 70
74 70 : 24
75 21 : 72
75 45 : 60
75 60 : 45
75 72 : 21
78 30 : 72
78 72 : 30
80 48 : 64
80 64 : 48
82 18 : 80
82 80 : 18
85 13 : 84
85 36 : 77
85 40 : 75
85 51 : 68
85 68 : 51
85 75 : 40
85 77 : 36
85 84 : 13
87 60 : 63
87 63 : 60
89 39 : 80
89 80 : 39
90 54 : 72
90 72 : 54
91 35 : 84
91 84 : 35
95 57 : 76
95 76 : 57
97 65 : 72
97 72 : 65

*/