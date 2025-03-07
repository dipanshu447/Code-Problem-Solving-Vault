#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 0;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] != nums[unique]){
                unique++;
                nums[unique] = nums[i];
            }
        }
        return unique+1;
    }
// Note : It modifies the nums array in-place within the function. However, the function only returns the new length of the modified array, not the entire array.
};