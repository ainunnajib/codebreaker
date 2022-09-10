n = int(input())
a = list(map(int, input().split()))
b = list(map(int, input().split()))
x = int(input())
a.sort()
b.sort(reverse=True)
ans = 0
for i in range(n):
	ans += max(0, a[i]+b[i]-x)
print(ans*100)