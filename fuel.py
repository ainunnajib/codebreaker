n, l, t = map(int, input().split())
f = list(map(int, input().split()))
ans = 0
f.sort()
d = t
prev = -1
for x in f:
  if d >= x:
    prev = x
  else:
    d = prev + t
    if d >= x:
      prev = x
    else:
      prev = -1
    ans += 1
if d >= l:
  print(ans)
elif prev >= 0 and prev + t >= l:
  print(ans+1)
else:
  print(-1)