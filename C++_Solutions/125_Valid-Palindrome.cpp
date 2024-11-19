#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // purifying the string by removing non alphanumeric characters and converting the letters to lowercase
        string str;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')){
                str += tolower(s[i]);
            }
        }
        // reversed the string so that string is backwards now and stored it in rev string 
        string rev;
        for (int i = str.size()-1; i >= 0; i--) {
            rev += str[i];
        }
        // now comparing the forward string with backward string if true its a vaild palindrom
        if(str.compare(rev) == 0){
            return true;
        }
        return false;
    }
};