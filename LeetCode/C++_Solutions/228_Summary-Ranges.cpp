#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
       int n = nums.size();
       vector<string> ans;
       for(int i = 0; i < n;){
            int start = nums[i];
            while(i+1 < n && nums[i] + 1 == nums[i+1]){
                i++;
            }
            ans.push_back(start == nums[i] ? to_string(start) : to_string(start) + "->" + to_string(nums[i]));
            i++;
       }
       return ans;
    }
};