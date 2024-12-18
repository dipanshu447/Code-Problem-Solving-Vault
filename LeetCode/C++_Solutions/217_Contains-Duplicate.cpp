#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Sort the array to bring duplicates next to each other and it takes O(n log n)
        sort(nums.begin(),nums.end());
        for(int i = 1; i < nums.size(); ++i){ // Check for adjacent duplicates in the sorted array
            if(nums[i] == nums[i-1]){
                return true;
            }
        }
        return false;
    }
};