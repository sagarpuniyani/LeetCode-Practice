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


//  top-Down Approach 

int solve (vector<int> &nums , int n , int sum ){
    cout<< " Calling for " << "(" << n << "," << sum << ")" << endl;

    // Base Case 
    if ( n >= nums.size() ) return sum;

    // include and exculde 
    int include = nums[n] + solve(nums , n+2 , sum );
    int exculde = solve(nums , n+1 , sum );
    sum = max ( include , exculde);
    cout << sum << endl;
    return sum;
}


int rob(vector<int>& nums) {
    int n = nums.size();
    int ans = solve(nums , 0 , 0 );
    return ans;
}

int main()
{
    vector <int> arr = {2};
    int res = rob(arr);
    cout << "Max Rob is : " <<  res << endl;
    
    return 0;
}