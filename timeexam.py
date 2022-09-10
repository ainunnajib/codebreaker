n = int(input())
day = 24*60
n %= day
h = n//60
m = n%60
s = ''
if h < 10:
	s += '0'
s += str(h)
if m < 10:
	s += '0'
s += str(m)
print(s)