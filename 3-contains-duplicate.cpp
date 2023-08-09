#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

// better solution    
bool containsDuplicate(vector<int>& nums) {
    sort(nums.begin(), nums.end());

    for (int i = 1; i < nums.size(); i++)
        if (nums[i - 1] == nums[i])
            return true;

    return false;
}

/*
// solution using an STL

bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        for(int i=1;i<nums.size();i++)
            if(nums[i-1]==nums[i])
                return true;

        return false;
}

int main() {

    // int times = 0;
    // cin>>times;

    // while (times--){

    vector<int> nums{1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    int n = 0;
    // cin>>n;
    // for (int i = 0; i<n; ++i){
    //     int temp;
    //     cin>>temp;
    //     nums.push_back(temp);
    // }
    cout << containsDuplicate(nums);
    // }
    return 0;
}
*/