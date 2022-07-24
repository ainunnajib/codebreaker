n = int(input())
for _ in range(n):
    s = input().strip()
    ans = 0
    for c in s:
        if c == 'A':
            ans += 1
        else:
            if ans > 0:
                ans -= 1
            else:
                ans += 1
    print(ans)