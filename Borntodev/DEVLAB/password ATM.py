def seperate_string_number(string):
    previous_character = string[0]
    groups = []
    newword = string[0]
    for x, i in enumerate(string[1:]):
        # print(i)
        if i.isalpha() and previous_character.isalpha():
            # newword += i
            continue
        elif i.isnumeric() and previous_character.isnumeric():
            newword += i
        else:
            if i.isalpha():
                groups.append(newword)  # add num
            newword = i  # check next

        previous_character = i

        if x == len(string) - 2:
            groups.append(newword)
            newword = ''
    return groups


num = input('')
result = seperate_string_number(num)
for i in range(0, len(result)):
    result[i] = int(result[i])

final = sum(result)

if final < 100:
    print("00" + str(final))
elif final < 1000:
    print("0" + str(final))
else:
    print(final)
