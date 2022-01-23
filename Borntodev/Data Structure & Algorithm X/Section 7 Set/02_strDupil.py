text = ""
lst = []
while text != "=":
    text = input("")
    firstname = text.split()
    lst.append(firstname[0])

# check

count = 0
for i in range(0, len(lst)):
    lst_temp = lst.copy()
    for j in range(0, len(lst)):
        if lst[j] == lst_temp[i]:
            count += 1
    count -= 1

print(len(lst)-count+1)
