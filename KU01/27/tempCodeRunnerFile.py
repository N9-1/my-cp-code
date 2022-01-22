def cal(w, l, a):
    w_h = w
    count_h = 0
    while a <= w_h:
        w_h -= a
        count_h += a
    current_h = w - count_h
    #  print(current_h)
    if l >= a:
        cal = ((current_h * a) * int(l / a)) + (count_h * l)
        #  print(cal)
        result = (w * l) - cal
        return result
    return count_h


if __name__ == "__main__":
    w, l, m, n = map(int, input().split())
    lst = []
    for i in range(m, n+1):
        lst.append(cal(w, l, i))

    print(min(lst))