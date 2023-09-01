// 1-sep 
#include <bits/stdc++.h>
using namespace std;


/* There is a function to return the number of the 
1's in the bit form of the no.

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10
Example 2:

Input: n = 5
Output: [0,1,1,2,1,2]
Explanation:
0 --> 0
1 --> 1
2 --> 10
3 --> 11
4 --> 100
5 --> 101

Constraints:

0 <= n <= 105*/

vector<int> countBits(int n) {
    vector <int> ans ;
    for (int i = 0 ; i <= n ; i++){
        ans.push_back(__builtin_popcount(i));
    }
    return ans;
}

int main()
{
    
    return 0;
}