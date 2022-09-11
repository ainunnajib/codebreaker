from collections import deque
d = deque()
n = int(input())
for _ in range(n):
	s, x = input().split()
	if s == 'ADD_BACK':
		d.append(x)
	elif s == 'ADD_FRONT':
		d.appendleft(x)
	elif s == 'SNIP_BACK':
		d = deque(list(d)[:int(x)+1])
	elif s == 'SNIP_FRONT':
		d = deque(list(d)[int(x)+1:])
	else:
		print(d[int(x)])