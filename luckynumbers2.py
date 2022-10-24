def isLucky(n):
    if n > 17 or n == 4 or n == 7:
        return True
    if n < 7:
        return False
    return isLucky(n-4) or isLucky(n-7)

t = int(input())
l = list(map(int, input().split()))
for x in l:
    print("Lucky" if isLucky(x) else "Unlucky")