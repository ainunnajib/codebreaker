n, m = map(int, input().split())
l = []
for _ in range(m):
	l.append(int(input()))
l.sort()
ans = 0
for k in l:
	if n >= k:
		n -= k
		ans += 1
	else:
		break
print(ans)