import time
start_time = time.time()
while True:
    n = int(input())
    if 1 <= n <= 100000:
        break
    else:
        print('Valid range')

lst_raw = []
lst_change = []
dict_1 = {}
dict_2 = {}  # for check

for i in range(n):
    lst_raw.append(i + 1)
    # get 1-n

    # input
    a = int(input())
    dict_1.update({lst_raw[i]: a})
    dict_2.update({a: lst_raw[i]})

# main loops
lst_check = lst_raw
round_count = 0
final_set = set()  # for check if size = n

while len(final_set) != n:
    lst_change.clear()
    # print(round_count, lst_raw[0])
    for j in range(n):
        # print(j)
        ele = dict_1.get(lst_raw[j])
        # print("ele = ", ele)
        lst_change.append(ele)  # new list
    # copy
    lst_raw = lst_change.copy()
    # print(lst_raw)
    for k in range(n):  # check match
        if lst_raw[k] == lst_check[k]:
            final_set.add(lst_raw[k])
    round_count += 1
    # print(round_count)

print(round_count)
print("--- %s seconds ---" % (time.time() - start_time))
