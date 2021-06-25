for _ in range(int(input())):
    s = input()
    k = len(s)
    if k <= 10:
        print(s)
    else:
        s1 = s[:1]
        s2 = s[k - 1:]
        s3 = s[1:k - 1]
        num = str(len(s3))
        print(s1 + num + s2)