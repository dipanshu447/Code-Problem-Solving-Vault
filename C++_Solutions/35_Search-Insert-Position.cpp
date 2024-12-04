#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;

        // check if the target is greater than the largest element if so return the index where it should be
        if (target > nums[high]) {
            return high + 1;
        }
        while (low <= high) {
            int mid = low + (high - low) / 2; // Prevent overflow
            if (nums[mid] == target) {
                return mid; // Target found
            }
            if (nums[mid] < target) {
                low = mid + 1; // Search right half
            } else {
                high = mid - 1; // Search left half
            }
        }
        return low;  // Return insertion position
    }
};