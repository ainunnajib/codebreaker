n = int(input())
l = list(map(int, input().split()))
for i in range(n-2, -1, -1):
	if l[i+1] < 0:
		l[i] += l[i+1]
print(min(l))