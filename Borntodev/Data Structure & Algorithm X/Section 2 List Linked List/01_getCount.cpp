#include <iostream>
using namespace std;

/* Link list node */
class Node {
public: 
    string Value;
    Node* Next;
};

void printList(Node*n) {
    while (n!=NULL) {
        cout << n->Value << endl;
        n = n->Next; 
    }
}

/* Given a reference (pointer to pointer) to the head 
of a list and an int, push a new node on the front 
of the list. */
void push(Node** head_ref, string new_Value) {
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


int main()
{
    Node* head = NULL; 
  
    /* Use push() to construct below list 
    1->2->1->3->1 */
    int index;
    while (index > 100||index < 0) 
    {
        cin >> index;
    }
    
    for(int i = 0; i < index; i++)
    {
        string ele;
        cin >> ele;
        push(&head, ele);
    }
    
    /* Check the count function */
    if(index > 1)
    {
        cout<<"Count : "<< getCount(head) << " Items" << endl; 
    }
    else
    {
        cout<<"Count : "<< getCount(head) << " Item" << endl; 
    }
    
    return 0; 
}