lst = []
indices = []
size = int(input())
for i in range(size):
    lst.append(input())

find = input()
for j in range(size):
    if lst[j] == find:
        indices.append(j + 1)

print("Position: ", end='')
print(*indices, sep=",")
