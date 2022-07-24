from sys import stdin
n, m = map(int, stdin.readline().split())
d = set()
for s in stdin.readlines():
	x, y = map(int, s.split())
	if x == y:
		continue
	d.add(x)
	d.add(y)
print(n - len(d))