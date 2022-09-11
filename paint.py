n = int(input())
p = list(map(int, input().split()))
d = list(map(int, input().split()))
l = []
for i in range(n):
	l.append( (d[i], p[i]) )
l.sort(reverse=True)
ans = 0
for i in range(n):
	ans += l[i][0]*i + l[i][1]
print(ans)