#include <iostream>
using namespace std;

class Solution {
public:
    int fib(int n) {
        if(n <= 1) return n;
        int f = 0,  s = 1;
        for(int i = 2; i <= n; i++){
            int c = f + s; // Calculate the current Fibonacci number
            f = s; // Update f to the previous s
            s = c; // Update s to the current Fibonacci number
        }
        return s; // returns the nth fibonacci number
    }
};