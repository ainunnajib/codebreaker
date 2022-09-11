n, a, b = map(int, input().split())
for i in range(1, n+1):
	if i%a == 0 and i%b == 0:
		print('FizzBuzz')
	elif i%a == 0:
		print('Fizz')
	elif i%b == 0:
		print('Buzz')
	else:
		print(i)