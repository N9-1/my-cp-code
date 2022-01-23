import statistics


def median(ll):
    ll.sort()
    mid = len(ll) // 2
    if len(ll) % 2 != 0:
        res = (ll[mid] + ll[~mid]) // 2
    else:
        mid -= 1
        res = ll[mid]
    return res


n = int(input())
lst = []
for i in range(n):
    ele = int(input())
    lst.append(ele)
# lst.sort(reverse=True)
# med = statistics.median(lst)
print(median(lst))
