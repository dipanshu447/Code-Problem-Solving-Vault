#include <iostream>
using namespace std;

// efficient way
class Solution {
public:
    bool isPowerOfThree(int n) {
        return n > 0 && 1162261467 % n == 0; // 1162261467 is the largest power of 3^19 that can be contained in a 32 bit signed integer
    }
};

// iterative way
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        while(n % 3 == 0){
            n /= 3;
        }
        return n == 1;
    }
};

// recursive way
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        if(n == 1) return true; 
        return n % 3 == 0 && isPowerOfThree(n/3);
    }
};