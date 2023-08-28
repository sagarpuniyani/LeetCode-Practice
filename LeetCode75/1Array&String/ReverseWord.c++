#include <bits/stdc++.h>
using namespace std;

/*Example 1:

Input: s = "the sky is blue"
Output: "blue is sky the"
Example 2:

Input: s = "  hello world  "
Output: "world hello"
Explanation: Your reversed string should not contain leading or trailing spaces.
Example 3:

Input: s = "a good   example"
Output: "example good a"
Explanation: You need to reduce multiple spaces between 
two words to a single space in the reversed string.*/

bool Isempty(char ch ){
    if(ch == ' ') return true;
    else return false;
}


string  reverseWords(string s) {
    stack <string> words;
    string word , res ;

    /*find the words */
    for(auto i=0 ; i<= s.size()-1 ; i++){
        cout << " i = " << i << endl;
        if(!Isempty(s[i])){
            word += s[i];
        }
        else {
            if(word.size() != 0 ){
                cout << " The Word is = " << word << endl;
                words.push(word);
                word.clear();
            }
        }
    }


    /*Putting the words Back */
    while (!words.empty()){
            res += words.top();
            words.pop();
            res += " ";
    }

    return res ; 
    
}


int main()
{
    // string s = "  hello " , m = "world ";
    // cout << "s + m =" << s+m << endl;
    // cout << "s[0]  = " << Isempty(s[0]) << endl;

    string a = "the sky is blue";
    cout << " a = " << a << endl;
    cout << " a ka size = " << a.size() << endl;
    string b = reverseWords(a); 
    cout << " b = " << b << endl;
    cout << " b ka size = " << b.size() << endl;
    
    return 0;
}