#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int n) {
        int revNum = 0;
        while(n != 0){
            int extract = n % 10;
            if(revNum > INT32_MAX  / 10 || revNum == INT32_MAX  / 10 && extract > 7) return 0; // overflow check
            if(revNum < INT32_MIN  / 10 || revNum == INT32_MIN  / 10 && extract < -8) return 0; // underflow check
            revNum = (revNum * 10) + extract;
            n /= 10;
        }
        return revNum;
    }
};
