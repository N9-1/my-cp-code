def ShortenInteger(int1):
    st = []
    i = 0

    while i < len(int1):
        if len(st) == 0 or int1[i] != st[-1]:
            st.append(int1[i])
            i += 1

        # if top ele = current
        # pop top
        else:
            st.pop()
            i += 1

    j = 0
    if len(st) == 0:
        return '0'

    else:
        short_integer = ""
        for j in st:  # return all list
            i += 1
            if i < len(st):
                short_integer += str(j)
            else:
                short_integer += str(j) + ' '

        return short_integer


if __name__ == "__main__":
    index = int(input(''))
    int1 = []
    for i in range(index):
        ele = int(input(''))
        int1.append(ele)
    print(ShortenInteger(int1))
