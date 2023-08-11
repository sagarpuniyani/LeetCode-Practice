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
        while(temp!= head){
            cout << "  "<< temp->data ;
            temp = temp->next;
    }
    cout<<endl;
}

void SplitCircularLL( Node* head  ){

    //  Initiating two Pointers Fast and Slow 
    auto fast = head->next;
    auto slow = head;

    // starting the Fast and slow Pointer from the head 

    while(fast->next != head){
        cout<< " Enter " << endl;
        slow = slow->next;

        // Data at Slow
        cout << " slow->data " << slow->data << endl;

        fast = fast->next;
        if(fast->next != head ){
        fast = fast->next;


        // Data at Fast
        cout << " fast->data " << fast->data << endl;
        }


        cout<< "EXit " << endl;
    }

    cout << " slow  = " << slow->data << endl;
    cout << " fast  = " << fast->data << endl;


    /* NOW the location of the slow and fast pointer is corrected 
    After  That We will try to make the Algo for  the 
    spliting the Single LInk list into two halves of the link list 
    */
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
    g->next = a;
    h->next = NULL;


    //Traversing of the Circular linklist 
    print(a);

    SplitCircularLL(a);
    
    return 0;
}