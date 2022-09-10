n = int(input())
l = []
for i in range(1, n+1):
	l.append( (int(input()) , i) )
l.sort()
for t in l:
	print(t[1])