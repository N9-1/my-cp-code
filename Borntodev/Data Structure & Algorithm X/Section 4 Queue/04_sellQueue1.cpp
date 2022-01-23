from queue import Queue


def showq(gq, gq2):
    size = 1
    while gq.qsize():
        if (size+1) == (gq.qsize()+1):
            print(size, '-', gq.get(), ':', int(gq2.get())*size)
            size += 1
        else:
            print(size, '-', gq.get(), ':', int(gq2.get())*size)
            size += 1


if __name__ == "__main__":
    q = Queue()
    q2 = Queue()
    while True:
        try:
            text=input()
        except EOFError:
            break
        ele = text
        if ele != "end queue":
            ele2 = input()
            q.put(ele)
            q2.put(ele2)
        else:
            print('###############')
            showq(q, q2)
            print('###############')