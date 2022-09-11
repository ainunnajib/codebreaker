from collections import defaultdict
n = int(input())
d = defaultdict(list)
for _ in range(n):
	s = input()
	d[-1*len(s)].append(s)
for x in sorted(d.keys()):
	for y in d[x]:
		print(y)