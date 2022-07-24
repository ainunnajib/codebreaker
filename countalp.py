n = int(input())
s = input()
a = 'abcdefghijklmnopqrstuvwxyz'
d = {}
for x in a:
	d[x] = 0
for c in s:
	d[c] += 1
for x in sorted(d.keys()):
	print(x, d[x])