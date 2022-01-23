text = input()
length = len(text)

for i in range(length):
    print(' ' * (2 * (length - 1 - i)), end='')
    for k in range(i, 0, -1):
        # print(k)
        print(text[k - length], end=' ')
    for j in range(i + 1):
        if j == i:
            print(text[j], end='')
        else:
            print(text[j], end=' ')
    print()

