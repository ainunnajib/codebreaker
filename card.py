n, k, s = input().split()
n = int(n)
k = int(k)
s = s[:-1]
nxt = list(range(1, n+1))
nxt[-1] = -1
val = list(range(n))
top = 0
bottom = n-1
for m in s:
	if m == 'A':
		nxt[bottom] = top
		bottom = top
		top = nxt[top]
		nxt[bottom] = -1
	else:
		second = nxt[top]
		nxt[bottom] = second
		bottom = second
		nxt[top] = nxt[second]
		nxt[bottom] = -1
cur = top
for _ in range(k-1):
	cur = nxt[cur]
print(val[cur], val[nxt[cur]], val[nxt[nxt[cur]]])