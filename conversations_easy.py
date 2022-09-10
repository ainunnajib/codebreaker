from collections import defaultdict
from sys import stdin
deleted = defaultdict(bool)
l = []
n = int(input())
for s in stdin.readlines():
	s = list(map(int, s.split()))
	if s[0] == 1:
		while len(l) > 0 and deleted[l[-1]]:
			l.pop()
		l.append(s[1])
		deleted[l[-1]] = False
	elif s[0] == 2:
		deleted[s[1]] = True
	elif s[0] == 3:
		while len(l) > 0 and deleted[l[-1]]:
			l.pop()
		deleted[l[-1]] = True
		l.pop()
	else:
		while len(l) > 0 and deleted[l[-1]]:
			l.pop()
		if len(l) == 0:
			print(-1)
		else:
			print(l[-1])
