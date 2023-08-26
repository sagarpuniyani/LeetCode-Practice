#include <bits/stdc++.h>
using namespace std;

int findMaxof(vector<int> candies){
    int max = 0;
    for (auto i = 0 ; i<candies.size() ; i++){
        if (candies[i] >= max){
            max = candies[i];
        }
    }
    return max;
}

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> vec ;
    int i = 0 ;
    int max = findMaxof(candies);
    while(i < candies.size() && candies[i]+extraCandies <= max){
        
    }
}

int main()
{
    
    return 0;
}