n, m = map(int, input().split())
a = list(map(int, input().split()))
b = set(map(int, input().split()))
l = []
for x in a[::-1]:
	if x in b:
		l.append(x)
print(*l)