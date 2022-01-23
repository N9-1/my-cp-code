from queue import Queue


def showq(gq, gq2):
    size = 1
    while gq.qsize():
        if (size + 1) == (gq.qsize() + 1):
            print(size, '-', gq.get(), ':', int(gq2.get()) * size)
            size += 1
        else:
            print(size, '-', gq.get(), ':', int(gq2.get()) * size)
            size += 1


def reverse_showq(gq, gq2, time):
    size = 1
    if time != 0:
        for k in range(time):
            gq.put(gq.get())
            gq2.put(gq2.get())

    while gq.qsize():
        if (size + 1) == (gq.qsize() + 1):
            print(size, '-', gq.get(), ':', int(gq2.get()))
            size += 1
        else:
            print(size, '-', gq.get(), ':', int(gq2.get()))
            size += 1


if __name__ == "__main__":
    size_q = int(input())
    q = Queue(maxsize=size_q)
    q2 = Queue(maxsize=size_q)

    for i in range(1, size_q+1):
        try:
            text = input()
        except EOFError:
            break
        ele = text
        ele2 = input()
        q.put(ele)
        q2.put(int(ele2)*i)
    loop = int(input())
    print('###############')
    reverse_showq(q, q2, loop)
    print('###############')
