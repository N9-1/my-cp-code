#include <iostream>
using namespace std;

/* Link list node */
class Node {
public: 
    int Value;
    Node* Next;
};

void printList(Node*n) {
    while (n!=NULL) {
        cout << n->Value << endl;
        // check next !null
        n = n->Next; 
    }
}

/* Given a reference (pointer to pointer) to the head 
of a list and an int, push a new node on the front 
of the list. */
void push(Node** head_ref, int new_Value) {
    /* allocate node */
    Node* new_node =new Node();
  
    /* put in the Value */
    new_node->Value = new_Value; 
  
    /* link the old list off the new node */
    new_node->Next = (*head_ref); 
  
    /* move the head to point to the new node */
    (*head_ref) = new_node; 
}

/* Counts no. of nodes in linked list */
int getCount(Node* head) 
{ 
    int count = 0; // Initialize count 
    Node* current = head; // Initialize current 
    while (current != NULL) 
    { 
        count++; 
        current = current->Next; 
    } 
    return count; 
} 

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

void printListwithsymbol(Node *head, int lastnum){
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
    Node* second = new Node();
    Node* third = new Node();

    head->Value = 1;
    head->Next = second;
    second->Value = 2;
    second->Next = third;
    third->Value = 3;
    third->Next = NULL;

    printList(head);

}

/* 
Linked list implementation
https://inginious.org/course/competitive-programming/ds-linkedlists2

Find Length of a Linked List 
https://www.geeksforgeeks.org/find-length-of-a-linked-list-iterative-and-recursive/

Linked List From User Input c++
https://stackoverflow.com/questions/30553330/linked-list-from-user-input-c/30554890
*/
