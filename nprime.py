isprime = [True for _ in range(10**6)]
isprime[0] = False
isprime[1] = False
for i in range(2, 10**3):
	if isprime[i]:
		for j in range(i*i, 10**6, i):
			isprime[j] = False
primes = [2]
for i in range(3, 10**6, 2):
	if isprime[i]:
		primes.append(i)

n = int(input())
print(primes[n-1])