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

    // Base Case 
    if(head == NULL || head->next == NULL){
        return NULL;
    }


    /*Adding the temp Node in Starting of the LINKed LIst 
    To make The Problem Easiler */

    Node* temp = new Node(0);
    temp->next = head;

    auto prev = temp;
    auto curr = temp->next;

    while(curr->next != NULL){

        /*Checking the data  which is Duplicate or NOT */

        if((curr->data == curr->next->data) && (curr->next != NULL) ){
            auto CurrToLocate =  curr->next;
            auto NodeToDelete = curr;

            curr = CurrToLocate;
            delete(NodeToDelete);
        }
        prev = curr;
        curr = curr->next;
    }

    return temp->next;

}


int main()
{
    Node *a = new Node(1);
    Node *b = new Node(1);
    Node *c = new Node(2);
    Node *d = new Node(3);
    Node *e = new Node(3);
    Node *f = new Node(4);
    Node *g = new Node(5);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    f->next = g;
    g->next = NULL;

    // Print the Link list 
    cout << "Printing " << endl;
    print(a);
    
    return 0;
}