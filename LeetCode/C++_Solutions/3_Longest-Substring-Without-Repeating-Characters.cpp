#include <iostream>
#include <vector>
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

// Even more efficient solution using vector index as ASCII values. 
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen = 0, left = 0;
        vector<int> lastIndex(256,-1); // Fixed-size array for ASCII characters
        for (int right = 0; right < s.size(); ++right) {
            // If the character was seen and is within the current substring
            if (lastIndex[s[right]] >= left) {
                left = lastIndex[s[right]] + 1; // Move the left pointer forward
            }
            maxlen = max((right - left) + 1, maxlen);
            // Update the last-seen index for the current character
            lastIndex[s[right]] = right;
        }
        return maxlen;
    }
};
