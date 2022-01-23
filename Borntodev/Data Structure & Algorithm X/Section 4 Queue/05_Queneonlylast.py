from queue import Queue


def showq(gq, gq2):
    size = 1
    while gq.qsize():
        if (size + 1) == gq.qsize():
            size += 1
            print(size, '-', gq.get(), ':', int(gq2.get()) * size)
        else:
            print(size, '-', gq.get(), ':', int(gq2.get()) * size)
            size += 1


if __name__ == "__main__":
    size = int(input())
    q = Queue(maxsize=size)
    while True:
        try:
            text = input()
        except EOFError:
            break
        ele = text
        if ele != '0':
            if q.full():
                q.get()
                q.put(ele)
            else:
                q.put(ele)
        else:
            while q.qsize() - 1:
                print(q.get(), end=' ')
            print(q.get())
