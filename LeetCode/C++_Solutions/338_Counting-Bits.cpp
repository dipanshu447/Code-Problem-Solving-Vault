#include <iostream>
#include <vector>
using namespace std;

// optimized solution using dynamic programming
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> cbits(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            cbits[i] = cbits[i & (i - 1)] + 1;
        }
        return cbits;
    }
};

// my original solution 
class Solution {
public:
    int binaryConv(int num) {
        if (num == 0 || num == 1) return num;
        int count = 0;
        while (num > 0) {
            count += num % 2;
            num /= 2;
        }
        return count;
    }

    vector<int> countBits(int n) {
        vector<int> cbits;
        for (int i = 0; i <= n; i++) {
            cbits.push_back(binaryConv(i));
        }
        return cbits;
    }
};