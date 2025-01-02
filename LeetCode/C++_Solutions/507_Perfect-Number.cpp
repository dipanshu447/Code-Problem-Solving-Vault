#include <iostream>
#include <math.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num <= 1) return false;
        int sum = 1; // Start with 1, as it's a divisor of every number
        for(int i = 2; i <= sqrt(num); i++){
            if(num % i == 0){
                sum += i + (num/i);
            }
        }
        return sum == num;
    }
};