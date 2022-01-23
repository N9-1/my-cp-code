st = set()
lst = []
for i in range(5):
    val = int(input())
    lst.append(val)
zipped = list(zip(lst))
lst = zip(*[i for i in zipped if zipped.count(i) == 1])
lst = list(lst)
aList = lst[0]
lst2 = list(aList)
result = 1
for x in lst2:
    result = result * x

print(result)

