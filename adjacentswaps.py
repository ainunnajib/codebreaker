n = int(input())
l = list(map(int, input().split()))
s = sorted(l)
ans = []
for i in range(n):
    x = l.index(s[i])
    for j in range(x, i, -1):
        ans.append(j)
    l = l[:i] + l[x:x+1] + l[i:x] + l[x+1:]

print(len(ans))
for c in ans:
    print(c)