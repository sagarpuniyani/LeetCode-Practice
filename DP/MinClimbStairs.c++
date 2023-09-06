/* minimum cost of climbing the stairs  */
#include <bits/stdc++.h>
using namespace std;

/*Example 1:

Input: cost = [10,15,20]
Output: 15
Explanation: You will start at index 1.
- Pay 15 and climb two steps to reach the top.
The total cost is 15.
Example 2:

Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: You will start at index 0.
- Pay 1 and climb two steps to reach index 2.
- Pay 1 and climb two steps to reach index 4.
- Pay 1 and climb two steps to reach index 6.
- Pay 1 and climb one step to reach index 7.
- Pay 1 and climb two steps to reach index 9.
- Pay 1 and climb one step to reach the top.
The total cost is 6.

Constraints:

2 <= cost.length <= 1000
0 <= cost[i] <= 999*/

int solve ( vector<int> &cost , int n ){

}

int minCostClimbingStairs(vector<int>& cost) {
    int n = cost.size();
    
    int res = min ( solve(cost , n-1 )  , solve(cost , n-1 ) );
    return res;
}

int main()
{
    vector<int> cost = {1,100,1,1,1,100,1,1,100,1};

    
    return 0;
}