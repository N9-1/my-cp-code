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

intersection = set.intersection(lst1, lst2, lst3)
print(len(intersection))
