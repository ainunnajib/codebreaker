s, e = map(int, input().split())
for x in range(s, e+1):
    if str(x) == str(x)[::-1]:
        print("Palindrome!")
    else:
        print(x)