n = int(input())
l = list(map(int, input().split()))
l.sort(reverse=True)
print(sum(l) - sum(l[3::4]))