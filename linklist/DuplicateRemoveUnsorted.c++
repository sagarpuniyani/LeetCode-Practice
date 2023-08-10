#include <bits/stdc++.h>
using namespace std;

/* To Removing the Dulplicate Node From the LINKED LIST 
With the Three different Approach 

    Approach - 1 
        T.C. = O(N^2)
        S.C. = O(1)

    Approach - 2 
        T.C. = O(N*logN)
        S.C> = O(1)

    Approach - 3  ( MAP Approach )
        T.C. = O(N)
        S.C. = O(N)

*/
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


int main()
{
    
    return 0;
}