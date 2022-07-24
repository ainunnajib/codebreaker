h, w = map(int, input().split())
l = []
for _ in range(h):
	l.append(list(map(int, input().split())))
a = [[0 for j in range(w)] for i in range(h)]
for j in range(w):
	a[h-1][j] = l[h-1][j]
for i in range(h-2,-1,-1):
	for j in range(w):
		a[i][j] = l[i][j] + max(a[i+1][max(j-1,0)], a[i+1][j], a[i+1][min(j+1,w-1)])
print(max(a[0]))