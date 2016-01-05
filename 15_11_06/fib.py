def fib(n):
	a = 0
	b = 1
	for i in range (0,n):
		temp = a
		a = b
		b = temp+b
	return a
nterms = int(input("How many terms?? "))
for c in range (0,nterms):
	print (fib(c))