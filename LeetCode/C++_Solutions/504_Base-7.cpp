#include <iostream>
using namespace std;

class Solution {
public:
    string convertToBase7(int num) {
        if(num == 0) return "0";
        string base;
        bool negative = num < 0;
        num = abs(num);
        while(num > 0){
            base.insert(base.begin(),'0' + num % 7);
            num /= 7;
        }
        if(negative) base.insert(base.begin(),'-');
        return base;
    }
};