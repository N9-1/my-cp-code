"""
Description:
    Height of BST = (maximum of the height of left and right subtree) + 1

Algorithm:
    1)If Tree is Empty - (Height = 0)
    2)Recursively find the Height of the left and right sub trees
    3)Find the mmaximum of the two height add 1 and return,
       as heigth of BST.

Program:
"""


class Node:
    def __init__(self, data):
        self.left = None
        self.right = None
        self.data = data

    # Insert Node
    def insert(self, data):
        if self.data:
            if data < self.data:
                if self.left is None:
                    self.left = Node(data)
                else:
                    self.left.insert(data)
            elif data > self.data:
                if self.right is None:
                    self.right = Node(data)
                else:
                    self.right.insert(data)
        else:
            self.data = data


def Get_Height(data):
    if data is None:
        return 0
    else:
        return 1 + max(Get_Height(data.left), Get_Height(data.right))


size = int(input())
root = Node(int(input()))
for i in range(size-1):
    root.insert(int(input()))

Height = Get_Height(root)
print(Height)
