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

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << "  ";
        head = head->next;
    }
    cout << endl;
}

Node* getStartnode_loop(Node* head){
    //critical case 
    if(head == NULL){
        return NULL;
    }

    Node* fast = head;
    Node* slow = head;

    while ( fast != NULL){
        fast = fast->next;
        if(fast == NULL){
            return NULL;
        }
        
        fast = fast->next;
        slow = slow->next;
        if( fast == slow ){
        cout <<  "Showing intersection at "<< slow->data << endl; 
           break;
        }
    }

    if(fast == slow ){
    slow = head ;


    while( fast != slow ){
        fast = fast->next;
        slow = slow->next;

        if ( fast == slow ){
            return fast ; 
        }
    }


    }


}

int main()
{

        // initalising the link list
    Node *a = new Node(3);
    Node *b = new Node(5);
    Node *c = new Node(7);
    Node *d = new Node(8);
    Node *e = new Node(9);
    Node *f = new Node(10);
    Node *g = new Node(12);
    Node *h = new Node(15);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = h;
    h->next = c;
    
    Node* n = getStartnode_loop(a);
    cout << " Starting  at "<< n->data << endl;

    return 0;
}