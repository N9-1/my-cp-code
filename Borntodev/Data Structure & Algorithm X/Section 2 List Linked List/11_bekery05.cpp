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
    // make next of new node as 
    // next of prev_node
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
        int pudding_count = 0;
        string foodname;
        cin >> foodname;
        int foodname_length;
        foodname_length = foodname.length();
        int price;
        price = 40 * foodname.length();
        char firstfoodname = foodname.front();
        append(&head, firstfoodname);
        for (int j = 0; j < foodname_length - 1; j++)
        {
            string food;
            cin >> food;
            char firstfood = food.front();
            append(&head, firstfood);
            if(food == "Pudding")
            {
                pudding_count += 1;
            }
        } 

        string customer;
        cin >> customer;
        cout << customer << endl;
       // cout << pudding_count;
        if(pudding_count == 0)
        {
            Node* next = NULL;
            Node* current = head;
            next = current->next;
            
            next->data = 'P';
        }
        printList(head);
        cout << ' ' << price << endl;
        price = 0;
        deleteList(&head);
        pudding_count = 0;

    }

    return 0;
}