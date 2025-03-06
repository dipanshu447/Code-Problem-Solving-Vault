#include <iostream>
using namespace std;

// efficient solution 
class Solution {
public:
    int hammingDistance(int x, int y) {
        int xval = x ^ y;
        int count = 0;
        while(xval > 0){
            count += xval & 1;
            xval >>= 1;
        }
        return count;
    }
};

// short and quick solution 
class Solution {
public:
    int hammingDistance(int x, int y) {
        return __builtin_popcount(x ^ y);
    }
};