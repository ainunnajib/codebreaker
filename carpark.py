n, s = map(int, input().split())
l = input().split()
i = 0
while i<n and l[i] == '0':
	i += 1
if i == n:
	print(0)
else:
	j = n-1
	while j>=0 and l[j] == '0':
		j -= 1
	l = l[i:j+1]
	n = len(l)
	cur = 0
	gaps = []
	for x in l:
		if x == '0':
			cur += 1
		elif cur > 0:
			gaps.append(cur)
			cur = 0
	if cur > 0:
		gaps.append(cur)
	gaps.sort(reverse=True)
	g = sum(gaps[:s-1])
	print(n-g)