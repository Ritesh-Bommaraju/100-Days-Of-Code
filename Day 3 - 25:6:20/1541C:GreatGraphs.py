for _ in range(int(input())):
    n = int(input())
    arr = list(map(int, input().split()))
    cost = 0
    time_diff = 0
    arr.sort()
    for i in range(2, n):
        time_diff += arr[i - 2]
        cost -= (arr[i] * (i - 1))
        cost += time_diff
    print(cost)
