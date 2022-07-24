n = int(input())
l = list(map(int, input().split()))
if n == 1:
	print(l[0])
else:
	a = [[0, 0] for i in range(n)]
	a[0][0] = 0
	a[0][1] = l[0]
	for i in range(1, n):
		a[i][0] = max(a[i-1][0], a[i-1][1])
		a[i][1] = a[i-1][0] + l[i]
	print(max(a[n-1][0], a[n-1][1]))