n = int(input())
a = list(map(int, input().split()))
o = list(map(int, input().split()))
l = []
for i in range(n):
	if o[i] == 1:
		l.append(a[i])
l.sort(reverse=True)
j = 0
for i in range(n):
	if o[i] == 1:
		a[i] = l[j]
		j += 1
ans = 0
for i in range(n):
	ans += a[i]*(n-i)
print(ans)