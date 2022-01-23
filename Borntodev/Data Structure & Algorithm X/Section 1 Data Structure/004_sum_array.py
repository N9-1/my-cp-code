n = -1
while n > 100 or n < 0:
    n = int(input())
num_sum = 0.00

for i in range(0, n, 1):
    item = float(input())
    num_sum += item

print("%.2f" % num_sum)
