# dp [i][j][k] - i students, j groups, k size largest group
dp = [[[0 for k in range(101)] for j in range(21)] for i in range(101)]
for i in range(5, 101):
	dp[i][1][i] = 1
# dp[i][j][k] adds into dp[i+x>=k][j+1][x>=k]
for j in range(1, 20):
	for k in range(5, 101):
		for i in range(k, 101):
			for x in range(k, 101):
				if i+x > 100:
					break
				dp[i+x][j+1][x] += dp[i][j][k]

n = int(input())
ans = 0
for j in range(21):
	for k in range(101):
		ans += dp[n][j][k]
print(ans)