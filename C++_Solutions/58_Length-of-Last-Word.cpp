#include <iostream>
#include <sstream>
#include <string>
#include <stack>
using namespace std;

// This is solution takes O(1)
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        int i = s.length()-1;

        while(i >= 0 && s[i] == ' '){
            i--;
        }

        while(i >= 0 && s[i] != ' '){
            length++;
            i--;
        }

        return length;
    }
};

// This is solution takes O(n)
class solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string word;
        stack<string> words;
        while(ss >> word){
            words.push(word);
        }

        word = words.top();

        return word.length();
    }
};