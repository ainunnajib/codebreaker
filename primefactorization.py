from collections import defaultdict

isprime = [True for _ in range(1000000)]
isprime[0] = False
isprime[1] = False
for i in range(2, 1000000):
	if not isprime[i]:
		continue
	for j in range(i*i, 1000000, i):
		isprime[j] = False
listprimes = [2]
for i in range(3, 1000000, 2):
	if isprime[i]:
		listprimes.append(i)

n = int(input())
p = defaultdict(int)
i = 0
while n > 1 and i < len(listprimes):
	while n % listprimes[i] == 0:
		n //= listprimes[i]
		p[listprimes[i]] += 1
	i += 1
if n > 1:
	p[n] = 1

for x in sorted(p.keys()):
	print(str(x) + '^' + str(p[x]))
