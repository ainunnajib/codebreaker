a, b, c, d = map(int, input().split())
la, lb, lc, ld = [], [], [], []
for _ in range(a):
	la.append(int(input()))
for _ in range(b):
	lb.append(int(input()))
for _ in range(c):
	lc.append(int(input()))
for _ in range(d):
	ld.append(int(input()))

ab, cd = {}, {}
for x in la:
	for y in lb:
		ab[x+y] = (x, y)
for x in lc:
	for y in ld:
		cd[-x-y] = (x, y)
for x in ab:
	if x in cd:
		print(ab[x][0], ab[x][1], cd[x][0], cd[x][1])