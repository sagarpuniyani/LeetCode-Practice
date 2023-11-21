#include <bits/stdc++.h>
using namespace std;

void print( vector<int>  & arr ){
    for (int item : arr ){
        cout << item << " ";
    }
    cout<<endl;
}

bool check ( int i , int j , int k ,int l ,  vector<int> &nums ){
    
    if( (nums[i] < nums[j] && nums[j] < nums[k]) && ( l >= k )){
        return true;
    }
    else if ( l <= k ){
        return check(i+1, j+1  ,k+1 , l , nums);
    }
    else{
        return false;
    }

}


bool increasingTriplet(vector<int>& nums) {
    int  i=0 , j=1 , k=2 , l = nums.size();
    return check(i , j , k , l , nums);
}

// i , j and k should not be in sequnce
bool increasingsTriplet( vector<int> &nums ){
    
}



int main()
{
    vector <int> nums = {20,100,10,12,5,13};
    print(nums);
    cout << "After checking " << increasingsTriplet(nums);    
    cout <<endl << "sample checking " << ( nums[0] < nums[1] && nums[1] < nums[2]);    
    return 0;
}