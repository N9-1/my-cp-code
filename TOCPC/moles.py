n, s = map(int, input().split())
lst_s = [s]
lst_t = [0]

for i in range(1, n+1):
    s, t = map(int, input().split())
    lst_s.append(s)
    lst_t.append(t)

if lst_s[0] == lst_s[1]:
    print(n)
else:
    print(n-1)