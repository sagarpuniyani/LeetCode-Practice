#include <bits/stdc++.h>
using namespace std;

class Mystack{

private:
    queue <int> q1;
    queue <int> q2;

public:
    void push(int x) {
        int size = q2.size();
        q1.push(x);

        while (size--){
            q1.push(q2.front());
            q2.pop();
        }
        swap(q1 , q2);

    }
    
    int pop() {
        
    }
    
    int top() {
        
    }
    
    bool empty() {
        
    }

};

int main()
{
    
    return 0;
}