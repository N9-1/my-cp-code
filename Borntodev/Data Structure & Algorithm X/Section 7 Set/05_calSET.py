text = ""
a = []
b = []
c = []
while True:
    text = input("")
    if text == "=":
        break
    a.append(int(text))

while True:
    text = input("")
    if text == "=":
        break
    b.append(int(text))

while True:
    text = input("")
    if text == "=":
        break
    c.append(int(text))

lst1, lst2, lst3 = set(a), set(b), set(c)

order = input("")
lst_o = list(order)
final = 0
result1 = {}
result2 = {}
for i in range(1, 4, 2):
    if i == 1:
        if lst_o[i] == 'U':
            result1 = set.union(lst1, lst2)
        elif lst_o[i] == '⋂':
            result1 = set.intersection(lst1, lst2)
    else:
        if lst_o[i] == 'U':
            result2 = set.union(result1, lst3)
        elif lst_o[i] == '⋂':
            result2 = set.intersection(result1, lst3)
for k in result2:
    final = final + int(k)

print(final)

