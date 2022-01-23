#include <iostream>
using namespace std;

struct Node {
    string data;
    struct Node* next;
    Node(string data)
    {
        this->data = data;
        next = NULL;
    }
};

struct LinkedList {
    Node* head;
    LinkedList()
    {
        head = NULL;
    }

    Node* reverse(Node* head)
    {
        if(head == NULL || head->next == NULL)
            return head;

            Node* rest = reverse(head->next);
            head->next->next = head;

            head->next = NULL;

            return rest;
    }

    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            if (temp->next == NULL)
            {
                cout << temp->data;
            }
            else
            {
                cout << temp->data << ",";
            }
            
            temp = temp->next;
        }
    }

    void push(string data)
    {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

int main()
{
    LinkedList ll;

    int index;
    cin >> index;

    for(int i = 0; i < index; i++)
    {
        string ele;
        cin >> ele;
        ll.push(ele);
    }

   //ll.head = ll.reverse(ll.head);
    
    ll.print();
    return 0; 
}