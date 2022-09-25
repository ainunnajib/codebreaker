MOD = 1000000007
h, w = map(int, input().split())
g = []
for _ in range(h):
    g.append(input())
a = [[0 for j in range(w)] for i in range(h)]
a[0][0] = 1
for j in range(1, w):
    if g[0][j] == '.':
        a[0][j] = a[0][j-1]
for i in range(1, h):
    if g[i][0] == '.':
        a[i][0] = a[i-1][0]
for i in range(1, h):
    for j in range(1, w):
        if g[i][j] == '.':
            a[i][j] = (a[i-1][j] + a[i][j-1]) % MOD
print(a[-1][-1])