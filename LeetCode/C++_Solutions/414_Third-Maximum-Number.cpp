#include <iostream>
#include <vector>
#include <climits> // for LONG_MIN
using namespace std;

class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int first = LONG_MIN,sec = LONG_MIN,third = LONG_MIN;
        
        for(int num : nums){
            if(num == first || num == sec || num == third) continue;

            if(num > first){
                third = sec;
                sec = first;
                first = num;
            }else if (num > sec){
                third = sec;
                sec = num;
            }else if (num > third) {
                third = num;
            } 
        }

        return third == LONG_MIN ? first : third;
    }
};