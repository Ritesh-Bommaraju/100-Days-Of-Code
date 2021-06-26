for _ in range(int(input())):
    s = int(input())
    a = list(map(int,input().split()))
    ans_even = []
    ans_odd = []
    for i in range(s):
        if a[i] % 2 == 0:
            ans_even.append(a[i])
        else:
            ans_odd.append(a[i])

    res = ans_even + ans_odd
    print(*res, sep=" ")