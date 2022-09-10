n, k = map(int, input().split())
l = list(map(int, input().split()))
if n == k:
	print(0)
else:
	ans = l[-k-1] - l[0]
	for i in range(1, k+1):
		ans = min(ans, l[-k-1+i] - l[i])
	print(ans)