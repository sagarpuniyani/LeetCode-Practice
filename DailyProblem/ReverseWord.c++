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
    int i=0;
    
    return s;
}

int main()
{

    string s = "Let's take LeetCode contest";
    string res = reverseWords(s);
    cout << " res = " << res << endl;
    
    string str = "abcdefg";
    string res2 = reverseStr(str , 2 );
    reverse(str.begin() , str.begin()+2);
    cout << "begin " << str.begin() << endl;
    cout << " str = " << str << endl;
    cout << " res2 = " << res2 << endl;
    
    return 0;
}