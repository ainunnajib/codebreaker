n = int(input())
ax, ay = map(int, input().split())
bx, by = map(int, input().split())
cx, cy = map(int, input().split())

if (bx < ax and bx < cx and ax <= cx) or (bx > ax and bx > cx and ax >= cx) or (by < ay and by < cy and ay <= cy) or (by > ay and by > cy and ay >= cy):
	print("NO")
else:
	print("YES")