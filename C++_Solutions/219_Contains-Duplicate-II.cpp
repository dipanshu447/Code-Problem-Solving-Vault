#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int , int> indexMap; // Stores the latest index of each element
        for (int i = 0; i < nums.size(); i++) {
            if (indexMap.count(nums[i]) && i - indexMap[nums[i]] <= k) {
                return true; // Found a duplicate within range
            }
            indexMap[nums[i]] = i;  // Update the index of the current element
            if(indexMap.size() > k){
                indexMap.erase(nums[i-k]); // Remove elements outside the range
            }
        }
        return false;
    }
};