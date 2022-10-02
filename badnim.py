t = int(input())
for _ in range(t):
    a, b, k = map(int, input().split())
    print("Oolimry" if a//k == b//k else "Errorgorn")