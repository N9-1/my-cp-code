t = int(input())

for i in range(0, t):
    n, l, r, k = map(int, input().split())
    a = list(map(int, input().split()))
    a_cut = []
    cal = 0
    count = 0
    #  case 1
    for j in a:
        if j <= r and j >= l:
            a_cut.append(j)
    #  case 2
    a_cut.sort()
    for g in a_cut:
        # print(g ,cal)
        cal += g
        if g > k:
            # print(0)
            break
        elif cal <= k:
            count += 1
        else:
            break
    print(count)



