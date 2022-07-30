from sys import stdin
t = int(stdin.readline())
for s in stdin.readlines():
    a, b, m = map(int, s.split())
    bb = bin(b)[2:][::-1]
    aa = [1 for i in range(len(bb))]
    aa[0] = a
    for i in range(1, len(aa)):
        aa[i] = (aa[i-1]**2)%m
    ans = 1
    for i in range(len(aa)):
        if bb[i] == '1':
            ans *= aa[i]
            ans %= m
    print(ans)