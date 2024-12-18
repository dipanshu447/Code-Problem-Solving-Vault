#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string num = to_string(x);
        string rev;
        for (int i = num.size()-1; i >= 0; i--)
        {
            rev += num[i]; 
        }
        int i = num.size();
        if (num.compare(rev) == 0)
        {
            return true;
        }
        return false;
    }
};
