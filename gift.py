n, k = map(int, input().split())
t = int(input())
ans = 0
for _ in range(n-1):
	tt = int(input())
	if t - tt >= k:
		ans += 1
	t = tt
print(ans)