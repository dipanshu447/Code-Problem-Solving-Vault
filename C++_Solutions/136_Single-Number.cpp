#include <iostream>
#include <vector>
using namespace std;

// XOR cancels duplicates (x ^ x = 0) and retains the unique number (0 ^ x = x) even if it adds the new number inside it will remove the same number binary from it and give us the unique number.
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int single = 0;
        for (int i = 0; i < nums.size(); i++) {
            single ^= nums[i];
        }
        return single;
    }
};