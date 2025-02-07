#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        int size = s.size();
        sort(s.begin(),s.end());
        int res = 0;
        for(int i = 0; i < size; i++){
            if(i + 1 < size && s[i] == s[i + 1]){
                res += 2;
                i++;
            }
        }
        if(res < size) res++;
        return res;
    }
};