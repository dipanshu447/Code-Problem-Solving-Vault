#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

// memory efficient but might not be good at fast lookups
class Solution {
public:
    string reverseVowels(string s) {
        int start = 0, end = s.size()-1;
        vector<char> vowels = {'a', 'e', 'i', 'o','u'};
        while(start < end){
            if(find(vowels.begin(), vowels.end(), tolower(s[start])) == vowels.end()){
                start++;
            }
            if(find(vowels.begin(), vowels.end(), tolower(s[end])) == vowels.end()){
                end--;
            }
            if(find(vowels.begin(), vowels.end(), tolower(s[start])) != vowels.end() && find(vowels.begin(), vowels.end(), tolower(s[end])) != vowels.end()){
                char temp = s[start];
                s[start] = s[end];
                s[end] = temp;
                start++;
                end--;
            }
        }
        return s; 
    }
};

// optimized and quite good at fast lookups but less memory efficient
class Solution {
public:
    string reverseVowels(string s) {
        int start = 0, end = s.size()-1;
        unordered_set<char> vowels = {'a', 'e', 'i', 'o','u','A', 'E', 'I', 'O','U'};
        while(start < end){
            while(start < end && find(vowels.begin(), vowels.end(), s[start]) == vowels.end()){
                start++;
            }
            while(start < end && find(vowels.begin(), vowels.end(), s[end]) == vowels.end()){
                end--;
            }
            if(start < end){
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s; 
    }
};