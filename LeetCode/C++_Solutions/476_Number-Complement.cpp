#include <iostream>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int mask = 0, temp = num;
        while(temp){
            mask = (mask << 1) | 1; // Create full-bit mask
            temp >>= 1; // Shift num to count bits
        }
        return num ^ mask; // XOR to flip bits 
    }
};