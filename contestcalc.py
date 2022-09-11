n = int(input())
d = {}
for _ in range(n):
	name, p = input().split()
	p = int(p)
	d[name] = p
c = int(input())
total = 0
for _ in range(c):
	total += d[input()]
print(total//c)