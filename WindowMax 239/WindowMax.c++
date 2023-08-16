#include <bits/stdc++.h>
using namespace std;


void print(vector <int> arr ){
    for (auto item : arr ){
        cout << "  "<< item;
    }
    cout<<endl;
}
class Solution {
public:

    int MaxFromSubArr(vector <int> arr ){
        int maxm = arr[0];

        for (auto item : arr ){
            if(maxm < item ){
                maxm = item ;
            }
        }

        return maxm;
    }

    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        /* Allocating the pointers */

        vector <int > arr = {};
        vector <int> temp(nums.begin() , nums.begin()+k);
        print(temp);

        int maximum = MaxFromSubArr(temp);

        arr.push_back(maximum);


        /*Recursive Call should conduct */


        return arr;


    }
};

int main()
{

    vector <int> arr = {1,3,-1,-3,5,3,6,7};

    print(arr);

    Solution obj ;


   // Create a new vector for the subarray
    // vector<int> subarray(arr.begin() , arr.begin() + 3);

    // cout<< "Sub array = ";
    // print(subarray);

    // cout << "sub arr at 0 "<< subarray[0]<<endl;
    // cout << "sub arr at 1 "<< subarray[1]<<endl;
    // cout << "sub arr at 2 "<< subarray[2]<<endl;

    vector <int> ans =  obj.maxSlidingWindow(arr , 3 );
    print(ans);

    
    return 0;
}