#include <iostream>
using namespace std;

// less efficient(O n^2) but this is only code i have totally understand.. I will try efficient solution later
class Solution {
public:
    string longestPalindrome(string s) {
        string res = "";
        int size = s.size();
        int len = 0;
        for (int i = 0; i < size; i++) {
            int l = i, r = i;
            while (l >= 0 && r < size && s[l] == s[r]) {
                if ((r - l + 1) > len) {
                    res = s.substr(l, r - l + 1);
                    len = r - l + 1;
                }
                l--;
                r++;
            }
            l = i, r = i + 1;
            while (l >= 0 && r < size && s[l] == s[r]) {
                if ((r - l + 1) > len) {
                    res = s.substr(l, r - l + 1);
                    len = r - l + 1;
                }
                l--;
                r++;
            }
        }
        return res;
    }
};