n = int(input())
a = []
result = []
for i in range(n):
    s = input()
    if s in a:
        count = a.count(s)
        result.append(s+str(count))
        a.append(s)
    else:
        a.append(s)
        result.append(s)
print(*result, sep = "\n")
