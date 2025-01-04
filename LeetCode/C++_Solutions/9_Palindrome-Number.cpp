#include <iostream>
#include <string>
using namespace std;

// efficient solution (updated on jan 2025)
class Solution {
public:
    bool isPalindrome(int n) {
        long long revNum = 0;
        int org = n;
        while(n > 0){
            int digit = n % 10;
            revNum = revNum * 10 + digit;
            n /= 10;
        }
        return revNum == org;
    }
};

// less effcient solution
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
