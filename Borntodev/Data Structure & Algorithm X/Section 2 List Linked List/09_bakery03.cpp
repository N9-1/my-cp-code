#include <iostream>
using namespace std;

class Node
{
    public:
    string data;
    Node *next;
};

void deleteList(Node** head_ref)
{
    Node* current = *head_ref;
    Node* next = NULL;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    *head_ref = NULL;
}

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

void append(Node** head_ref, char new_data)
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
        //cout << node->data << endl;
        if (node->next == NULL)
        {
            cout << node->data;
        }
        else
        {
            cout << node->data;
        }
        node = node->next;
    }
}

int main()
{
    Node* head = NULL;

    int index;
    cin >> index;
    for (int i = 0; i < index; i++)
    {
        string name;
        cin >> name;
        int name_length;
        name_length = name.length();
        int price;
        price = 50 * name.length();
        for (int j = 0; j < name_length; j++)
        {
            string food;
            cin >> food;
            char firstfood = food.front();
            append(&head, firstfood);
        } 
        cout << name << endl;
        printList(head);
        cout << ' ' << price << endl;
        price = 0;
        deleteList(&head);

    }

    return 0;
}