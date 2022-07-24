n, a, b = map(int, input().split())
la = list(map(int, input().split()))
lb = list(map(int, input().split()))
x = [(la[i] - lb[i], i) for i in range(n)]
x.sort(reverse=True)
ans = 0
for t in x[:a]:
	ans += la[t[1]]
for t in x[a:]:
	ans += lb[t[1]]
print(ans)