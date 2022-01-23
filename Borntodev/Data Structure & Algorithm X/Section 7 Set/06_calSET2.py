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
# cal ()
lst_o_temp = []
lst4 = {}
if lst_o.index('(') != ValueError:
    lst_o_temp = lst_o.copy()
    # front A B
    if lst_o.index('(') == 0:
        if lst_o[2] == 'U':
            lst4 = set.union(lst1, lst2)
        elif lst_o[2] == '⋂':
            lst4 = set.intersection(lst1, lst2)
        elif lst_o[2] == '-':
            lst4 = set.difference(lst1, lst2)
        del lst_o_temp[0:5]
        lst_o.clear()
        lst_o = ['D']
        lst_o.extend(lst_o_temp)
        lst2 = lst4
    # back B C
    else:
        if lst_o[4] == 'U':
            lst4 = set.union(lst2, lst3)
        elif lst_o[4] == '⋂':
            lst4 = set.intersection(lst2, lst3)
        elif lst_o[4] == '-':
            lst4 = set.difference(lst2, lst3)
        del lst_o[2:7]
        lst_o.append('D')
        lst2 = lst4

# print(lst1, lst2)
# print(lst_o, len(lst_o))
final = 0
result1 = {}
result2 = {}
for i in range(1, len(lst_o), 2):
    if i == 1:
        if lst_o[i] == 'U':
            result1 = set.union(lst1, lst2)
        elif lst_o[i] == '⋂':
            result1 = set.intersection(lst1, lst2)
        elif lst_o[i] == '-':
            result1 = set.difference(lst1, lst2)
    else:
        if lst_o[i] == 'U':
            result2 = set.union(result1, lst3)
        elif lst_o[i] == '⋂':
            result2 = set.intersection(result1, lst3)
        elif lst_o[i] == '-':
            result2 = set.difference(result1, lst3)
if len(lst_o) < 4:
    result2 = result1
# print(result2)
for k in result2:
    final = final + int(k)

print(final)
