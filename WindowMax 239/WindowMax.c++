#include <bits/stdc++.h>
using namespace std;



class Solution {
public:

    void print(vector <int> nums){
        // for (int i = 0 ; i<nums.size() ; i++){
        //     cout << "  "<< nums[i];
        // } 

        for (int item : nums){
            cout << "  " << item;
        }
        cout<<endl;
    }

    int MaxFromArr(vector<int > nums , int start ,  int k ){
        int maxi = nums[start];
        for (int i = start ; i<k ; i++){
            if(maxi < nums[i]){
                maxi = nums[i];
            }
        }

        return maxi;
    }


    vector <int> maxSlidingWindow(vector<int>& nums, int k) {

        cout << "Fn Calling..... "<< endl;
        int cnt = k;
        vector <int> arr = {};

        /*allocating the Slidding window of the Arr */
        int start = 0 , end = 0;
        while((cnt-1)){
            end ++ ;
            cnt-- ;
        }
        cout << " k = "<< k << endl;

        // arr.push_back(nums[start]);
        // arr.push_back(nums[end]);

        int MaxSubArr = MaxFromArr( nums ,start ,  k);

        arr.push_back(MaxSubArr);


        /* Call the Recursive Finction to Traverse Complete Array 
        the recursive Call needs the partial Access of the Vector */

        int* ptr = &nums[start];


    




        cout<< "Fn Ending......"<< endl;
        return arr;
        
    }
};

int main()
{
    vector <int> arr = {1,3,-1,-3,5,3,6,7};

    Solution obj;

    obj.print(arr);

    vector <int> res = obj.maxSlidingWindow(arr , 3);

    obj.print(res);


    // Example of catanation of vector 
    vector<int> vector1 = {1, 2, 3};
    vector<int> vector2 = {4, 5, 6};

    vector1.insert(vector1.end(), vector2.begin(), vector2.end());

    cout << "Example = ";
    obj.print(vector1);
    
    return 0;
}