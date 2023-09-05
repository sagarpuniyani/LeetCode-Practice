#include <bits/stdc++.h>
using namespace std;


/*Problem no 70. Climbing Stairs

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

Constraints:

1 <= n <= 45

*/


int climbingStairs(int nstairs , int n ){
    cout << " Calling " << nstairs << " , " << n << endl;
    // base case 
    if ( n == nstairs) return 1;

    if ( n > nstairs ) return 0;

    // recursive Call
    return (climbingStairs(nstairs , n+1) + climbingStairs(nstairs  , n+2));
}

// Dp solution 
int climbingStairsDP(vector <int> &dp ,int nstairs ,  int n  ){
    // Base Case 
    if( n == nstairs ) return 1;
    

}



int climbStairs(int n) {
    int ans = climbingStairs(n , 0 );
    return  ans;
}

int climbStairsDP(int n ){
    vector <int> dp(n+1 , -1);
    dp[0] = 0;
    dp[1] = 1;

    // Calling the ways Counting Function 
    int ans = climbingStairs(dp , n , 0 );
}

int main()
{
    int res = climbStairs(3);
    cout << "No. of ways to climb the stairs : " << res << endl;
    
    return 0;
}