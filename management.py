from collections import defaultdict
d = defaultdict(int)
n = int(input())
l = list(map(int, input().split()))
for x in l:
	d[x] += 1
for i in range(1, n+1):
	print(d[i])