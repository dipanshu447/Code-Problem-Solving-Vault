#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int majority = 0;
        int count = 0;
        for(int i = 0; i < nums.size(); i++){
            if(count == 0){
                majority = nums[i];
                count = 1;
            }else if(majority == nums[i]){
                ++count;
            }else {
                --count;
            }
        }
        return majority;
    }
};