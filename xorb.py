x, y, b = map(int, input().split())
ans = 0
p = 1
while x > 0 or y > 0:
    ans += ((x%b + y%b)%b) * p
    p *= b
    x //= b
    y //= b
print(ans)