t = int(input())
for _ in range(t):
	x1, y1, x2, y2 = map(int, input().split())
	ans = abs(x2-x1) + abs(y2-y1)
	if x1 != x2 and y1 != y2:
		ans += 2
	print(ans)