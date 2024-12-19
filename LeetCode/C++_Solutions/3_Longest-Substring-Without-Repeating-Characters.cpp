#include <iostream>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0;
        string subStr;
        for(string::iterator i = s.begin(); i != s.end(); i++){
            if(subStr.find(*(i)) == string::npos){
                subStr += *(i);
            }else {
                if(subStr.find(*(i)) == 0){
                    subStr.erase(subStr.begin());
                    subStr += *(i);
                } else {
                    subStr.erase(subStr.begin(), subStr.begin() + subStr.find(*(i))+1);
                    subStr += *(i);
                }
            }

            if(subStr.size() > maxlen){
                maxlen = subStr.size();
            }
        }
        return maxlen;
    }
};