num = int(input(""))
for x in range(1, num + 1):
	print(" " * (num - x) + "*" * (x + (x - 1)))
for x in range(num-1, 0, -1):
	print(" " * (num - x) + "*" * (x + (x - 1)))