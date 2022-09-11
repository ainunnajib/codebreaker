n = int(input())
l = []
l.append(str(n))
while n > 1:
	if n%2 == 0:
		n //= 2
	else:
		n = 3*n + 1
	l.append(str(n))
print(' '.join(l))