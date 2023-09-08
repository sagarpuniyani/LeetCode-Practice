/*118. Pascal's Triangle*/

#include <bits/stdc++.h>
using namespace std;
/*
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]

Constraints:

1 <= numRows <= 30
*/

void print(vector <int> arr ){
    for (auto i : arr ){
        cout << "  " << i ;
    }
    cout << endl;
}

void printpascal( vector <vector <int>> arr ){
    for (auto element  : arr ){
        print(element) ;
    }
    cout << endl;
}


void pascal( vector <vector <int>> &arr){
    int n = arr.size();
}


vector<vector<int>> generate(int numRows) {
    vector < vector <int>> arr(numRows);

    return arr;

}

int main()
{
    vector<vector <int>> arr = {{1,3,4},{5,6,7},{8,9,7}};
    printpascal(arr);
    
    return 0;
}