n, k = map(int, input().split())
l = list(map(int, input().split()))
for i in range(1,n):
	l[i] += l[i-1]
ans = l[k-1]
for i in range(k, n):
	ans = max(ans, l[i] - l[i-k])
print(ans)