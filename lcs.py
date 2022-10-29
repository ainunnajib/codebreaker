a = input()
b = input()
n = len(a)
m = len(b)
dp = [[0 for j in range(m+1)] for i in range(n+1)]
for i in range(n):
	for j in range(m):
		if a[i] == b[j]:
			dp[i+1][j+1] = max(dp[i][j] + 1, dp[i][j+1], dp[i+1][j])
		else:
			dp[i+1][j+1] = max(dp[i][j], dp[i][j+1], dp[i+1][j])

print(dp[n][m])