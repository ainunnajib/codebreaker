from bisect import bisect

n, q = map(int, input().split())
p = list(map(int, input().split()))
m = list(map(int, input().split()))

d = {}
minp = p[0]
d[minp] = 1
l = [minp]
for i in range(1, n):
    if p[i] < minp:
        minp = p[i]
        d[minp] = i+1
        l.append(minp)
l.sort()

for x in m:
    i = bisect(l, x)
    if i == 0:
        print(-1, end = ' ')
    else:
        print(d[l[i-1]], end = ' ')