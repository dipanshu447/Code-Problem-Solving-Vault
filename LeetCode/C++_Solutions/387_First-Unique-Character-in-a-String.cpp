#include <iostream>
using namespace std;

class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.size();
        int unique[26] = {0};
        for(char c : s) unique[c - 'a']++;
        for(int i = 0; i < n; i++){
            if(unique[s[i] - 'a'] == 1){
                return i;
            }
        }
        return -1;
    }
};