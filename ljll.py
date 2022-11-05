from collections import defaultdict

n = int(input())
s = input()
a, b = map(int, input().split())

m = defaultdict(int)
cum = 0
m[0] = -1
ans = -1
for i in range(n):
	x = 0
	if s[i] == 'J':
		x = -a
	elif s[i] == 'L':
		x = b
	cum += x
	if cum in m:
		ans = max(ans, i - m[cum])
	else:
		m[cum] = i
print(ans)