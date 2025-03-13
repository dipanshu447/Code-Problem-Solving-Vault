#include <iostream>
using namespace std;

class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string check = s + s;
        return check.substr(1, check.size()-2).find(s) != string::npos;
    }
};