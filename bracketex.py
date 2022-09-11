n = int(input())
s = input()
l = []
rev = {')':'(', '}':'{', ']':'['}
valid = True
for c in s:
	if c in ')]}':
		if len(l) == 0 or l[-1] != rev[c]:
			valid = False
			break
		l.pop()
	else:
		l.append(c)
if valid and len(l) == 0:
	print('Valid')
else:
	print('Invalid')