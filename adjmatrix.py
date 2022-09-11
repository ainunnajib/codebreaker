n, e = map(int, input().split())
adj = [['0' for i in range(n)] for j in range(n)]
for _ in range(e):
	x, y = map(int, input().split())
	adj[x-1][y-1] = '1'
	adj[y-1][x-1] = '1'
for row in adj:
	print(''.join(row))