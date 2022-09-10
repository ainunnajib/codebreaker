s = input()
t = input()
x = -1
a, b = '', ''
done = False
valid = True
for i in range(len(s)):
	if s[i] != t[i]:
		if done:
			valid = False
			break
		if x < 0:
			x = i
			a = s[i]
			b = t[i]
		else:
			if i == x+1:
				if b == s[i] and a == t[i]:
					done = True
				else:
					valid = False
					break
			else:
				valid = False
				break
if x >= 0 and not done:
	valid = False
print('Yes' if valid else 'No')