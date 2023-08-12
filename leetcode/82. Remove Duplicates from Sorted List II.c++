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
    Node* temp = head;
    while (temp != NULL)
    {
        cout << " " << temp->data;
        temp = temp->next;
    }
    cout << endl;
}
/*
This the problem of the Removing the ALL the Duplicate Node 
of the Linked list 
*/


Node* deleteDuplicates(Node* head) {
        
        auto curr = head;
        auto prev = head;

    while(curr->next != NULL){
        if((curr->data == curr->next->data ) && (curr->next != NULL)){
            Node*  NodeToDelete = curr->next;
            Node* CurrToLocate = curr->next->next;

            delete (NodeToDelete);
            curr->next = CurrToLocate;
        }
        
    }

}


int main()
{
     Node *a = new Node(1);
    Node *b = new Node(1);
    Node *c = new Node(2);
    Node *d = new Node(2);
    Node *e = new Node(2);
    Node *f = new Node(5);
    Node *g = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = NULL;
    
    return 0;
}