from queue import Queue


def show2q(gq, gq2):
    size = 1
    while gq.qsize():
        if (size + 1) == gq.qsize():
            size += 1
            print(size, '-', gq.get(), ':', int(gq2.get()) * size)
        else:
            print(size, '-', gq.get(), ':', int(gq2.get()) * size)
            size += 1


def showq(gq, maxsize):
    size = gq.qsize()
    print('[', end='')
    while gq.qsize() - 1:
        print(gq.get(), end=', ')
    print(gq.get(), end='')
    if maxsize > size:
        print(',', 'Alomomola]')
    else:
        print(']')


def shownone(maxsize):
    if maxsize == 0:
        print('[]')
        return
    tex = "Alomomola"
    print('[', end='')
    while maxsize - 1:
        maxsize -= 1
        print(tex, end=', ')
    print(tex + ']')


def qcount(gq, maxsize, gq_full):
    print("M:", maxsize - gq)
    print("O:", gq_full.qsize())


if __name__ == "__main__":
    size_q = int(input())
    q = Queue(maxsize=size_q)
    q_full = Queue()

    while True:
        try:
            text = input()
        except EOFError:
            break
        ele = text
        if ele != 'end':
            if q.qsize() > size_q - 1:
                q_full.put(ele)
            else:
                q.put(ele)
        else:
            size_ele = q.qsize()
            if q.qsize() != 0:
                showq(q, size_q)
            else:
                shownone(size_q)
            qcount(size_ele, size_q, q_full)
