text = ""
a = []
b = []
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

lst1, lst2 = set(a), set(b)

# ;-;
if len(lst1) > len(lst2):
    print('A', len(lst1))
elif len(lst1) == len(lst2):
    print("AB", len(lst1))
else:
    print('B', len(lst2))
