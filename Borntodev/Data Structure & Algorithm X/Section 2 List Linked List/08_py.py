# Bakery02

class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class LinkedList:
    def __init__(self):
        self.head = None

    def deleteList(self):
        current = self.head
        while current:
            prev = current.next  # move
            # delete cur node
            del current.data

            # cur to prev
            current = prev

        # In python garbage collection happens
        # therefore, only
        # self.head = None
        # would also delete the link list

    def push(self, new_data):

        new_node = Node(new_data)
        new_node.next = self.head
        self.head = new_node

    def printList(self):
        temp = self.head
        while temp:
            if temp.next is None:
                print(temp.data)
            else:
                print(temp.data+'-', end='')
            temp = temp.next

    def append(self, new_data):

        new_node = Node(new_data)
        if self.head is None:
            self.head = new_node
            return

        last = self.head
        while last.next:
            last = last.next
        last.next = new_node


if __name__ == '__main__':
    llist = LinkedList()
    index = int(input(''))
    if index < 1:
        print("nobody here")
    for i in range(index):
        llist = LinkedList()
        name = str(input(""))
        print(name)
        name_len = len(name)
        for j in range(name_len):
            food_list = str(input(""))
            llist.append(food_list)
        llist.printList()
        llist.deleteList()
