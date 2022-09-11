MOD = 998244353
n = int(input())
print(0)
a, b = 0, 1
for _ in range(n):
	b += a
	a = b - a
	b %= MOD
	print(a)