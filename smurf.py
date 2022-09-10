n = int(input())
l = input().split()
if n == 1:
	print(l[0])
else:
	a = l[1::2]
	b = l[::2]
	if n%2 == 0:
		print(' '.join(a[::-1]) + ' ' + ' '.join(b))
	else:
		print(' '.join(b[::-1]) + ' ' + ' '.join(a))