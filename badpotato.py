n = int(input())
l = list(map(int, input().split()))
a = [0]
x = 0
for i in l:
	if i == -1:
		a.append(x)
		x = 0
	else:
		x += i
a.append(x)
print(max(a))