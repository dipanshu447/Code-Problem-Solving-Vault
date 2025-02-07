#include <iostream>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        unsigned int n = num;
        string hexDigits = "0123456789abcdef", hexNum = "";
        while(n != 0){
            hexNum = hexDigits[n % 16] + hexNum;
            n /= 16;
        }
        return hexNum;
    }
};