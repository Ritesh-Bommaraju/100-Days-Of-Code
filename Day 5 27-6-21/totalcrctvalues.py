for _ in range(int(input())):
    n = int(input())
    d = {}
    for i in range(n*3):
        key, value = map(str,input().split())
        if key in d:
            d[key] = d[key]+int(value)
        else:
            d.update({key:int(value)})
    for i in sorted(d.values()):
        print(i, end=" ")
    print('')
