#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

bool hasCircular(Node *head){

    if(head == NULL ){
        return NULL;
    }

    Node* temp = head->next;

    while(temp!= NULL && temp != head ){
        temp = temp->next;
    }

    if(temp == NULL )
    { 
        return true;
    }
    
    return false;
}

// To Traverse the linklist
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}

int main()
{

    // initalising the link list
    Node *head = new Node(3);
    Node *a = head;
    Node *b = new Node(5);
    Node *c = new Node(7);
    Node *d = new Node(9);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = a;

    
    bool hc = hasCircular(head);
    cout << "Is the linked list has Cycle : "<< hc << endl;

    return 0;
}