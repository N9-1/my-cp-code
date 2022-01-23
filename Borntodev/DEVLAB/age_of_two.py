"""
เมื่อ 9 ปีที่แล้วนาย A แก่กว่านาย B เป็นจำนวน 3 เท่า
และปัจจุบันนาย A แก่กว่านาย B เป็นจำนวน 2 ปี ถามว่าตอนนี้ทั้งคู่อายุเท่าไร

old
a = x - 9 + 2
b = 3(x - 9)

NOW
a = x+2
b = x

x - 9 + 2 = 3x - 27
20 = 2x
10 = x

b = 10
a = 12
"""

nmy = input()
nmy_list = nmy.split(' ')

for i in range(0, len(nmy_list)):
    nmy_list[i] = int(nmy_list[i])

n = int(nmy_list[0])
m = int(nmy_list[1])
y = int(nmy_list[2])

x = m - 1

a = (-y) + n
# a = ((y - n) * m) + (y * m)
b = m * y

cal = a + b
b = int(cal / x)
a = int(b + n)
print(a, b)
