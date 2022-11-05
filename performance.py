n, q = map(int, input().split())
x = list(map(int, input().split()))
offset = 0
for i in range(q//2):
	offset += n + x[2*i] - x[2*i+1]
	offset %= n
ans = [(i + offset)%n + 1 for i in range(n)]
if q % 2 == 1:
	print(*(ans[:x[-1]][::-1]), *(ans[x[-1]:][::-1]))
else:
	print(*ans)