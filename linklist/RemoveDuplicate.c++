#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

void print(Node *head)
{
    auto temp = head;
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}

/*Given the head of a sorted linked list,
delete all duplicates such that each element appears only once.
Return the linked list sorted as well.*/

Node *deleteDuplicates(Node *head)
{

    // Base Case 
    if(head == NULL){
        return head ;
    }

    // Genearal Case 
    
}

int main()
{

    Node *a = new Node(1);
    Node *b = new Node(2);
    Node *c = new Node(2);
    Node *d = new Node(2);
    Node *e = new Node(5);
    Node *f = new Node(6);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = NULL;

    return 0;
}