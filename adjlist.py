n, e = map(int, input().split())
adj = [[] for _ in range(n)]
for _ in range(e):
	x, y = input().split()
	adj[int(x)-1].append(y)
	adj[int(y)-1].append(x)
for l in adj:
	print(' '.join(l))