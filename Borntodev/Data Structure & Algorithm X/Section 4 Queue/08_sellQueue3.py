import queue
from queue import Queue


def reverseplus_showq(gq, gq2, maxprice, maxsize):
    first_name = ""
    size = 1
    count = maxsize
    count_first = 0
    count_loop = 1
    while gq.qsize():
        temp_ele = int(gq2.get())
        temp_name = gq.get()
        if (temp_ele * count) <= maxprice:
            count_first += 1
            print(size, '-', temp_name, ':', temp_ele * count)
            if count_first == 1:
                first_name = temp_name
            size += 1
            count -= 1
            count_loop += 1

        else:
            if count_loop == 1:
                first_name = temp_name
                count_loop += 1
            count -= 1
            size += 1
#    if count_loop == 1:
#        print(">>", first_name)
    print(">>", first_name)


if __name__ == "__main__":
    size_q = int(input())
    q = Queue(maxsize=size_q)
    q2 = Queue(maxsize=size_q)

    for i in range(size_q + 1, 1, -1):
        try:
            text = input()
        except EOFError:
            break
        ele = text
        ele2 = input()
        q.put(ele)
        q2.put(int(ele2))
    price = int(input())
    print('##############')
    reverseplus_showq(q, q2, price, size_q)
    print('##############')
