n, m = map(int, input().split())
if n % m == 0:
    for _ in range(n):
        print(n//m, end=' ')
else:
    for _ in range(m-1):
        print(1, end=' ')
    n -= m-1
    for _ in range(n):
        print(n, end=' ')