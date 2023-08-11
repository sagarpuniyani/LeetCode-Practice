#include <bits/stdc++.h>
using namespace std;


/* 
    Splitting the Circular LInked List INTO 
    Two Equal Halves 
*/

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        (*this).data = data;
        (*this).next = NULL;
    }

};


void print(Node* head){

    auto temp = head;
    cout << temp->data ;
        temp = temp->next;
    while(temp->next != head){
        cout << "  "<< temp->data ;
        temp = temp->next;
    }
    cout<<endl;
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
    h->next = a;

    
    return 0;
}