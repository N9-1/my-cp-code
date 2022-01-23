#include <iostream>
using namespace std;

class Node
{
    public:
    string data;
    Node *next;
};

void push(Node** head_ref, string new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

void insertAfter(Node* prev_node, string new_data)
{
    if (prev_node == NULL)
    {
        cout << "prev cannot be NULL";
        return;
    }

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;

}

void append(Node** head_ref, string new_data)
{
    Node* new_node = new Node();
    Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;
    last->next = new_node;
    return;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << node->data << endl;
        node = node->next;
    }
}

int main()
{
    Node* head = NULL;

    int index;
    //cin >> index;
    index = 5;
    for (int i = 0; i < index; i++)
    {
        string ele;
        cin >> ele;
        if (ele == "Pudding" && i > 0)
        {
            insertAfter(head, ele);
        }
        else
            append(&head, ele);
    }

    printList(head);

    return 0;
}