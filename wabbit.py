n, q, k = map(int, input().split())
p = list(map(int, input().split()))
x = list(map(int, input().split()))

p.sort(reverse=True)

a = [0 for i in range(n)]
a[0] = p[0]
for i in range(1, n):
    a[i] = a[i-1] + p[i]

for i in range(q):
    if x[i] > k:
        print( a[min(x[i]-1, n-1)] + a[min((x[i]//(k+1)-1), n-1)] )
    else:
        print( a[min(x[i]-1, n-1)] )
