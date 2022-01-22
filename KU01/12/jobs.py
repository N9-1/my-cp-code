while True:
    n = int(input())
    if 1 <= n <= 100000:
        break
    else:
        print('Valid range')

lst = []
for i in range(n):
    a = int(input())
    lst.append(a)
lst.sort()
index = 0
for j in range(n):
    if lst[j] > 18:
        for k in range(n):
            if lst[k] < 18:
                index = k
                continue

