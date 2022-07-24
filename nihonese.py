n, m = map(int, input().split())
l = [input(), input()]
ans = 0
for s in l:
  valid = True
  c = s[0]
  for cc in s[1:]:
    if c not in 'aiueon' and cc not in 'aiueo':
      valid = False
      break
    c = cc
  if valid:
    ans += 1
print(["zero","wan","su"][ans])