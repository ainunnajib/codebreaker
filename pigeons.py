import sys
n, m = map(int, sys.stdin.readline().split())
valid = True
c = 0
for s in sys.stdin.readlines():
	if s == 'LAND\n':
		c += 1
	elif s == 'LEAVE\n':
		c -= 1
	elif s == 'EVACUATE\n':
		c = 0
	if c > n:
		valid = False
		break
print('PLAN ACCEPTED' if valid else 'PLAN REJECTED')