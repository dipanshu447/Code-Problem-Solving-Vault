#include <iostream>
using namespace std;

class Solution {
public:
    bool canWinNim(int n) {
        return n % 4 != 0; // If n is a multiple of 4, the player will always lose if the opponent plays optimally.
    }
};