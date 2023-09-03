/*this is the Series of Dynamic Programming */

/*Nth fibbonacci Number */

#include <bits/stdc++.h>
using namespace std;


// top-down Approach { Recursion  +  Memorization }
int fib(int n , vector<int>  &dp) {
    cout << "Calling " << endl;
    //  Base Case 
    if ( n <= 1) return n;

    if (dp[n] != -1 ) return dp[n];

    dp[n] =  fib(n-1 , dp) + fib(n-2 , dp);
    return dp[n];

}


int main()
{
    int num;
    cout << "Enter The Number : " ; 
    cin >> num;

    vector<int> dp(num+1 , -1);
    int res = fib(num , dp);

    cout << " fib(" << num << ") = " << res << endl;
    
    return 0;
}