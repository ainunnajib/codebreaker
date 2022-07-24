n, k, x = map(int, input().split())
for _ in range(k):
	if x % 7 == 0 or '7' in str(x):
		print('UP!')
	else:
		print(x)
	x += n