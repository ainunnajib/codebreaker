n = int(input())
lx, ly = [], []
for _ in range(n):
	x, y = map(int, input().split())
	lx.append(x)
	ly.append(y)
lx.sort()
ly.sort()
print(lx[n//2], ly[n//2])