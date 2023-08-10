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
    auto curr = head;

    // Genearal Case 
    while(curr != NULL ){

        // Check the Data value 
        // 1. If the data is equal
        if(curr->data == curr->next->data){
            curr = curr->next;
        }

        // If the Data is Not equal 
        else {
            auto Node_to_Delete = curr->next;
            auto Curr_To_Locate = curr->next->next;

            delete Node_to_Delete ; 
            curr = Curr_To_Locate;
        }

        return  head;


    }
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

    // Printing the linked list 
    print(a);

    // Calling the Duplicate Remover Function 
    // Node* new_head  = deleteDuplicates(a);

    // cout<< "After the Removal of the Duplicates "<<endl;
    // print(new_head);

    return 0;
}