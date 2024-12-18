#include <iostream>
using namespace std;

// it processes only the 1 bits, which drastically reduce the number of iterations for numbers with sparse set bits.
class Solution {
public:
    int hammingWeight(int n) {
        int setBitCount = 0;
        while (n) {
            n &= (n - 1); // Removes the lowest set bit
            ++setBitCount; 
        }

        return setBitCount;
    }
};