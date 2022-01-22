import time

n, k, t = input().split()

t = int(t)
round_count = 1
current = 1
final_set = set()
final_set.add(1)
result = 0
j = 0
start = time.time()
while True:
    # print("current = ", current)
    cal = current + int(k)
    if cal > int(n):
        cal = cal - int(n)
    # print(cal)
    final_set.add(cal)
    current = cal
    # print("cal = ", cal)
    if cal == 1 or cal == t:
        break

print(len(final_set))

end = time.time()
print(f'Time measured: {end - start} seconds.')
