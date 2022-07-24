n = int(input())
l = []
s = input().strip()
ans = 0
for c in s:
  if c == ')':
    if len(l) > 0 and l[-1] == '(':
      l.pop()
    else:
      l.append(c)
  else:
    l.append(c)
  if len(l) == 0:
    ans += 1
print(ans)