from atexit import register


n = int(input())
l = []
for _ in range(n):
    x = 0
    s = input()
    if s[:4] == 'PUSH' or s[:6] == 'IFZERO':
        s, x = s.split()
        x = int(x)
    l.append((s, x))

stack = []
reg = 0
i = 0
while l[i][0] != 'DONE':
    s, x = l[i]
    if s == 'PUSH':
        stack.append(x)
    elif s == 'STORE':
        reg = stack[-1]
        stack.pop()
    elif s == 'LOAD':
        stack.append(reg)
    elif s == 'PLUS':
        x = stack[-1]
        stack.pop()
        x += stack[-1]
        stack.pop()
        stack.append(x)
    elif s == 'TIMES':
        x = stack[-1]
        stack.pop()
        x *= stack[-1]
        stack.pop()
        stack.append(x)
    elif s == 'IFZERO':
        n = x
        x = stack[-1]
        stack.pop()
        if x == 0:
            i = n
            continue
    i += 1
print(stack[-1])