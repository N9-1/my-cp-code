#include <iostream>
using namespace std;

/* Link list node */
class Node 
{
public: 
    int Value;
    Node* Next;
};

void addToList(Node* head)
{
    bool quit = false;
    int temp;
    Node* current;
    int n = 4;

    for(int i = 0; i < n; i++)
    {
        cin >> temp;
        // Allocate the new node here:
        current = new Node;
        current->Value = temp;
        // the new node is inserted after the empty head
        // because head is a empty node is your implemetation:
        current->Next = head->Next;
        head->Next = current;
    }
    return;
    }

void printList(Node *head, int lastnum){
    // head->Next, because the head is an empty node in your implementation,
    // but be carefull, head had to never be NULL in your program,
    // so you should also check if head is NULL.
    if (!head->Next)
    {
        cout << "Nothing is in the list." << endl;
        return;
    }

    Node *current;
    // set current to head->Next, because the head is empty in your implementation:
    current = head->Next;
    while (current)
    {
        if(current->Value == lastnum)
        {
            cout << current->Value;
        }
        else
        {
            cout << current->Value << ">";
        }
        current = current->Next;
    }
}

void append(Node** head_ref, int new_data)  
{  
    
    // 1. allocate node 
    Node* new_node = new Node(); 
    
    // Used in step 5 
    Node *last = *head_ref; 
    
    // 2. Put in the data 
    new_node->Value = new_data;  
    
    // 3. This new node is going to be  
    // the last node, so make next of  
    // it as NULL
    new_node->Next = NULL;  
    
    // 4. If the Linked List is empty, 
    // then make the new node as head 
    if (*head_ref == NULL)  
    {  
        *head_ref = new_node;  
        return;  
    }  
    
    // 5. Else traverse till the last node 
    while (last->Next != NULL)  
        last = last->Next;  
    
    // 6. Change the next of last node 
    last->Next = new_node;  
    return;  
}  

int main()
{
    Node* head = new Node();
    head->Next = NULL;
    int n = 4;
    int lastnum;
    for(int i = 0; i < n; i++)
    {
        int times;
        cin >> times;
        append(&head, times);
        if(i == 3)
        {
            lastnum = times;
        }
    }

    printList(head, lastnum);

    return 0; 
}