#include <iostream>
using namespace std;

class Solution {
public:
    int arrangeCoins(int n) {
       int l = 0, r = n, res = 0;
       while(l <= r){
            int mid = (l + r) / 2;
            long long coins = (mid / 2.0) * (mid + 1);
            if(coins > n){
                r = mid - 1;
            }else {
                l = mid + 1;
                res = max(mid, res);
            }
       }
       return res;
    }
};