n = int(input())
ans = 0
x = 1
while x*x <= n:
  if n%x == 0:
    ans += x + n//x
  x += 1
ans -= n

if ans == n:
  print(-1)
else:
  x = 1
  while x*x <= ans:
    if ans%x == 0:
      n -= x + ans//x
    x += 1
  n += ans
  if n == 0:
    print(ans)
  else:
    print(-1)