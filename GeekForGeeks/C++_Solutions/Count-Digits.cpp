#include <iostream>
using namespace std;

class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        int org = n, count = 0;
        
        while(n > 0){
            int d = n % 10;
            if(d != 0 && org % d == 0){
                count++;
            }
            n /= 10;
        }
        return count;
    }
};
