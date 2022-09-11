from bisect import bisect_left, bisect_right
n = int(input())
l = list(map(int, input().split()))
l.sort()
q = int(input())
for _ in range(q):
	x = int(input())
	i = bisect_left(l, x)
	j = bisect_right(l, x)
	print('Smaller:', str(i) + ',', 'Greater:', n-j)