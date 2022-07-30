n = int(input())
l = list(map(int, input().split()))
a = [(l[i], i+1) for i in range(n)]
a.sort()
ans = [x[1] for x in a]
print(*ans)