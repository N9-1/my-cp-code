n = -1
while n > 100 or n < 0:
    n = int(input())

a = []
for i in range(0, n):
    ele = int(input())
    a.append(ele)

result = dict((i, a.count(i)) for i in a)

for key, value in result.items():
    if value > 1:
        print(key, ':', value, "Items")
    else:
        print(key, ':', value, "Item")

