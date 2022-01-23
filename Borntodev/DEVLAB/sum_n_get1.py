num = input()
x = [int(i) for i in str(num)]
result = sum(x)
while result > 10:
    temp = [int(j) for j in str(result)]
    result = sum(temp)

print(result)