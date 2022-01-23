n = int(input())
lst = []
for i in range(n):
    ele = int(input())
    lst.append(ele)
lst.sort(reverse=True)

for i in range(n):
    print(lst[i])
    