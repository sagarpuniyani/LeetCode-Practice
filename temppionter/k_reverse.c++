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


void print(Node* head){
    auto temp = head;
    while(temp != NULL){
        cout<< " " << temp->data;
        temp = temp->next;
    }
    cout<<endl;
}

bool check_has_Node(Node* head , int k){
    
}


Node* reverse(Node* head){
    // Base case 
    if(head->next == NULL){
        return head;
    }

    // General case 
    Node * temp = reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    //return 
    return temp;

}

bool check_Has_k(Node* head , int k ){
    // Base Case 
    if(head == NULL){
        return false;
    }

}

Node* Reversing(Node* head){

    // Base Case 
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node* forw  = NULL;
    Node* prev  = NULL;
    Node* curr  = head;
    
    while (curr != NULL){
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw;
    }

    return prev;
    
}


int main()
{

    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = NULL;

    print(a);
    Node* head = reverse(a);
    print(head);

    cout<<"Reversing "<<endl;
    Node* r = Reversing(head);
    print(r);

    return 0;
}