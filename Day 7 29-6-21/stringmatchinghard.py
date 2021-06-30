s1, s2 = map(str, input().split())
s11 = list(s1)
n = len(s1)
s22 = []
length = len(s2)
chars = int(length / n)
for i in range(0, length, chars):
    part = s2[i: i + chars]
    s22.append(part)
ans1 = set(s1)
ans2 = set(s22)
ans11 = list(ans1)
ans22 = list(ans2)
ans22.sort()
ans11.sort()
d = {}
for key in ans11:
    for value in ans22:
        d[key] = value
        ans22.remove(value)
        break
final = []
for i in s1:
    final.append(d[i])
listToStr = ''.join([str(elem) for elem in final])
if listToStr == s2:
    print("true")
else:
    print("false")