// Reverse Words in a String III

#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    stack<char> sentence ;
    string res;

    for ( int i=0 ; i<s.size() ; i++){
        if (s[i] != ' ') sentence.push(s[i]);

        else if( s[i] == ' ') {
            while( !sentence.empty()){
                res += sentence.top();
                sentence.pop();
            }
            res += " ";
        }
    }
    while( !sentence.empty()){
        res += sentence.top();
        sentence.pop();
    }
    return res;
}

string reverseStr(string s, int k) {
    
}

int main()
{

    string s = "Let's take LeetCode contest";
    string res = reverseWords(s);
    cout << " res = " << res << endl;
    
    
    
    return 0;
}