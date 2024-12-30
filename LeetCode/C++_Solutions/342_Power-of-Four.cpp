#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n-1)) == 0 && (n-1) % 3 == 0;
    }
};

// Check if the number is a power of four:
// 1. Must be positive.
// 2. Must be a power of two (only one bit set).
// 3. (num - 1) must be divisible by 3 (unique property of powers of four).