#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// effcient solution
class Solution {
public:
    void reverseString(vector<char>& s) {
        int size = s.size();
        for(int i = 0; i < size/2; i++){
            char temp = s[i];
            s[i] = s[size-1-i];
            s[size-1-i] = temp;
        }
    }
};

// efficient too but relies on an external library 
class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};