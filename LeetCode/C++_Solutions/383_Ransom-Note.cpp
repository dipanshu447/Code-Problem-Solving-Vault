#include <iostream>
#include <unordered_map>
using namespace std;

// efficient solution 
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count[26] = {};
        for(char c : magazine) count[c - 'a']++; 
        for(char c : ransomNote){
            if(count[c - 'a']-- == 0) return false;
        }
        return true;
    }
};

// original solution ofc less efficient 
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> magazineCount;
        for(char c : magazine) magazineCount[c]++;
        
        for(char c : ransomNote){
            if(magazineCount[c] == 0){
                return false;
            }
            magazineCount[c]--;
        }
        return true;
    }
};