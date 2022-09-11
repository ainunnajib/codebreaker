n = int(input())
l = list(map(int, input().split()))
l = l[::-1]
a = []
x = l[0]
a.append(x)
for i in range(1, n):
	if l[i] > x:
		x = l[i]
		a.append(x)
for x in a:
	print(x)