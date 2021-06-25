for _ in range(int(input())):
    n = int(input())
    arr = list(range(1,n+1))
    i = 0
    while i < arr.__len__() - 1:
        t = arr[i]
        arr[i] = arr[i + 1]
        arr[i + 1] = t
        i = i + 2
    if n%2 != 0:
        k = arr[n - 1]
        t = arr[n - 2]
        arr[n - 1] = t
        arr[n - 2] = k
    print(*arr, sep=" ")