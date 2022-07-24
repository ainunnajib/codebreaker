n, m = map(int, input().split())
v, w = [0], [0]
for _ in range(n):
	x, y = map(int, input().split())
	w.append(x)
	v.append(y)
dp = [[0 for j in range(m+1)] for i in range(n+1)]
for i in range(1, n+1):
	for j in range(m+1):
		if j < w[i]:
			dp[i][j] = dp[i-1][j]
		else:
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i])
print(dp[n][m])