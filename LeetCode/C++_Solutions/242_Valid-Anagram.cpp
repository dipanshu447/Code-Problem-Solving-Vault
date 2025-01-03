#include <iostream>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;

        // Frequency map for string s and t
        unordered_map<char,int> anaS;
        unordered_map<char,int> anaT;

        // Count the frequency of each character in both strings
        for(int i = 0; i < s.size(); i++){
            anaS[s[i]]++;
            anaT[t[i]]++;
        }
        
        return anaS == anaT; // If the frequency maps are equal, the strings are anagrams
    }
};