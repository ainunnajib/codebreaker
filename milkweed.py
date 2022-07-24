x, y, a, b = map(int, input().split())
g = [[0 for j in range(y)] for i in range(x)]
a -= 1
b = y - b
for j in range(y):
	s = input()
	for i in range(x):
		if s[i] == '*':
			g[i][j] = -1
l = [(a, b)]
g[a][b] = 1
ans = 1
idx = 0
while len(l) > idx:
	p, q = l[idx]
	idx += 1
	level = g[p][q] + 1
	for nx in [p-1, p, p+1]:
		if nx < 0 or nx >= x:
			continue
		for ny in [q-1, q, q+1]:
			if ny < 0 or ny >= y or g[nx][ny] != 0:
				continue
			g[nx][ny] = level
			ans = max(ans, level)
			l.append((nx,ny))
print(ans-1)