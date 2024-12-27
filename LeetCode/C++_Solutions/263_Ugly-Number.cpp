#include <iostream>
using namespace std;

class Solution {
public:
    bool isUgly(int n) {
        if(n <= 0) return false; // Non-positive numbers are not ugly
        while(n > 1){  // Keep dividing by 2, 3, or 5 as long as divisible
            if(n % 2 == 0) n /= 2;
            else if(n % 3 == 0) n /= 3;
            else if(n % 5 == 0) n /= 5;
            else break;
        }
        return n == 1;
    }
};