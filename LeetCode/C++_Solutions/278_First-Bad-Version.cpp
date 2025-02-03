#include <iostream>
using namespace std;

// The API isBadVersion is defined for you.
bool isBadVersion(int version); // comment this before running


class Solution {
public:
    int firstBadVersion(int n) {
        long long low = 1, high = n;
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(isBadVersion(mid)){
                high = mid-1;
            }else {
                low = mid+1;
            }
        }
        return low;
    }
};