from collections import defaultdict
n = int(input())
s = input().strip()
nl = s.count('L')
d = defaultdict(int)
l = 0
for c in s:
  if c == 'L':
    l += 1
  else:
    d[(l, nl-l)] += 1
ans = 0
for t in d:
  ans += d[t] * t[0] * t[1]
print(ans)