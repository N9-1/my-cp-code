lst = list(map(int, input().split()))
cal = 0
a = list(str(lst[0]))
b = list(str(lst[1]))
a_size = list(str(lst[0]))
b_size = list(str(lst[1]))
if len(a_size) > len(b_size):
    for x in range(len(a_size)-len(b_size)):
        a.pop(0)
elif len(a_size) < len(b_size):
    for x in range(len(b_size)-len(a_size)):
        b.pop(0)


for i in range(0, len(a_size)):
    cal = int(a[i]) + int(b[i])
    # print(a,b,cal)
    if cal >= 10:
        print("Hard")
        break
    elif i == len(a_size)-1:
        print("Easy")
    
