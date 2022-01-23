n = int(input())
lst_name = []
lst_age = []
for i in range(n):
    ele = input("")
    lst_name.append(ele)
for j in range(n):
    ele = int(input())
    lst_age.append(ele)

dicts = {lst_name[i]: lst_age[i] for i in range(len(lst_age))}
sort_dicts = sorted(dicts.items())
# print(sort_dicts)
sort_dicts_temp = sort_dicts.copy()
sort_dicts = sorted(dicts.items(), key=lambda x:x[1], reverse=True)
# print(sort_dicts)
count = 0
# compare
for i in range(n):
    if sort_dicts_temp[i] == sort_dicts[i]:
        result = list(sort_dicts[i])
        print(result[0])
        count += 1

if count == 0:
    print('none')
