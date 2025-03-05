#include <iostream>
using namespace std;

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        for(int i = 0; i < 32; i++){ // Iterate through all 32 bits
            uint32_t bit = (n >> i) & 1;  // Extract the i-th bit from n
            res += (bit << (31 - i)); // Move the extracted bit to the correct reversed position
        }
        return res;
    }
};