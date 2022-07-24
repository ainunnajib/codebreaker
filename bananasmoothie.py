n, k = map(int, input().split())
l = list(map(int, input().split()))
l.sort(reverse=True)
ans = 0
for x in l[k-1::k]:
	if x < 0:
		break
	ans += x
print(ans)