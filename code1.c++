#include <bits/stdc++.h>
using namespace std;

void func(int &a ){
    a++;
    cout << a << endl;
    cout << &a << endl;
}
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

Node* addend(Node* head  , Node* t){
    Node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = t;
    return head;
}

int main()
{
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);

    a->next = b;
    b->next = NULL;


    c->next = d;
    d->next = e;
    e->next = NULL;

    print(a);
    print(c);
    Node* end = addend(a,c);
    print(end);


    return 0;
}