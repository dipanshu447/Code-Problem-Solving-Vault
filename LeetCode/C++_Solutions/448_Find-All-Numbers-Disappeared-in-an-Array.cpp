#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int size = nums.size();
        vector<int> res;
        for(int i = 0; i < size; i++){
            int index = abs(nums[i]) - 1;
            if(nums[index] > 0) nums[index] *= -1;
        }
        for(int i = 0; i < size; i++) if(nums[i] > 0) res.push_back(i + 1);
        return res;
    }
};