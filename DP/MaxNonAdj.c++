/*198. House Robber*/ 
#include <bits/stdc++.h>
using namespace std;

/* 

Example 1:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
Example 2:

Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 400
*/

void print(vector<int> arr ) {
    for( auto i=0 ; i<arr.size() ; i++){
        cout << "  " << arr.at(i) ;
    }
    cout << endl;
}


//  top-Down Approach 

int solve (vector<int> &nums , int n , vector<int> &dp ){
    // Base Case 
    if ( n >= nums.size() ) return 0;

    // Dp has element 
    if (dp[n] != 0 ) return dp[n];

    // include and exculde 
    int include = nums[n] + solve(nums , n+2 , dp );
    int exculde = solve(nums , n+1 , dp );
    dp[n] = max ( include , exculde);
    return  dp[n];
}


int rob(vector<int>& nums) {
    int n = nums.size();
    vector <int> dp(n , 0);
    int ans = solve(nums , 0 , dp);
    print(dp);
    return ans;
}


// Tabulazation 

int solveTab(vector<int> &nums , int n , vector<int> &dp ){
    cout<< " Calling for " << "(" << n << "," << dp[n] << ")" << endl;
}

int Robbery( vector<int> &nums){
    int n = nums.size();
    vector <int> dp(n , 0);
    int ans = solveTab(nums , 0 , dp);
    return ans;
}


int main()
{
    vector <int> arr = {183,219,57,193,94,233,202,154,65,240,97,234,100,249,186,66,90,238,168,128,177,235,50,81,185,165,217,207,88,80,112,78,135,62,228,247,211};
    vector<int> arr2 = {2,7,9,3,1};
    int res = rob(arr2);
    int res1 = Robbery(arr);
    cout << "Max Rob is : " <<  res << endl;

    
    return 0;
}