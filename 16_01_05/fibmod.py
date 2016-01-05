import sys;

f = [0] * 25;
g = map(int, sys.stdin.readline().split());
n = g[2];
f[0] = g[0];
f[1] = g[1];
for i in range(2,n):
	f[i] = f[i-1] * f[i-1] + f[i-2];
print(f[n-1]);