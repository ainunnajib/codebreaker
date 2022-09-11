n = int(input())
if n < 2:
	print('Not Prime')
elif n == 2:
	print('Prime')
else:
	prime = True
	for i in range(2, 2**16):
		if n%i == 0:
			prime = False
			break
		if i*i > n:
			break
	print('Prime' if prime else 'Not Prime')