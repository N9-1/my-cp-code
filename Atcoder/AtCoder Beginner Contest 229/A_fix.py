t = str()
for i in range(0,2):
    a = input()
    t += a

lst = list(t)

#  case 1 
if lst.count('#') >= 3:
    print('Yes')
elif lst.count('#') <= 1:
    print('No')
else:
    if (lst[0] == '.' and lst[3] == '#') or (lst[1] == '.' and lst[2] == '#'):
        print('Yes')
    else:
        print('No')
        