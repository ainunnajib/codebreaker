d = {}
for i in range(10**6+1):
	d[i**3] = i
n = int(input())
l = input().split()
for x in l:
	print(d[int(x)])