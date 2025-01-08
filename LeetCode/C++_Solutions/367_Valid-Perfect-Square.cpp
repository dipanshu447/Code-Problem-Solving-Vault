#include <iostream>
using namespace std;

class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num == 1) return true;
        int left = 1, right = num / 2;
        while(left <= right){
            int mid = left + (right - left) / 2;
            long long square = (long long)mid * mid;
            if(square > num){
                right = mid - 1;
            }
            else if(square < num){
                left = mid + 1;
            }
            else{
                return true;
            }
        }
        return false;
    }
};