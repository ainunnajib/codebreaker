l = [1]
for i in range(6):
	l.append(5 * (10**i))
	l.append(10**(i+1))
n = int(input())
x = 0
for c in l[::-1]:
	x += n//c
	n %= c
print(x)