from typing import Sized


from math import log10


t = int(input())
n = []

for i in range(0, t):
    n.append(int(input()))
    

for j in n:
    count = 0
    l = int(log10(j))+1
    # print("i first = ", l)
    l_lock = l
    n_case = 1
    if j % 2 == 0:
        print(0)
    else:
        while(n_case % 2 != 0):
            j = str(j)
            # n_res = j[::-1]
            # print("l in ncase", l)
            # n_case = int(n_res[l-1:l_lock] + j[l:l_lock])
            n_case = j[::-1]
            # print(n_case)
            l -= 1
            if l == 0:
                print(-1)
                break
            count += 1
        print(count)