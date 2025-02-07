#include <iostream>
#include <unordered_map>
#include <vector>
#include <sstream>
using namespace std;

// efficient solution
class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word)
        {
            words.push_back(word);
        }

        if (words.size() != pattern.size())
            return false;

        unordered_map<char, string> chartoWord;
        unordered_map<string, char> WordtoChar;

        for (int i = 0; i < pattern.size(); i++)
        {
            char c = pattern[i];
            string w = words[i];

            if (chartoWord.count(c))
            {
                if (chartoWord[c] != w)
                    return false;
            }
            else
            {
                chartoWord[c] = w;
            }

            if (WordtoChar.count(w))
            {
                if (WordtoChar[w] != c)
                    return false;
            }
            else
            {
                WordtoChar[w] = c;
            }
        }
        return true;
    }
};

// another effcient shorter code 
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        stringstream ss(s);
        string word;

        while (ss >> word) words.push_back(word);
        if (words.size() != pattern.size()) return false;

        unordered_map<char, string> chartoWord;
        unordered_map<string, char> WordtoChar;

        for (int i = 0; i < pattern.size(); i++) {
            char c = pattern[i];
            string w = words[i];

            if (chartoWord.count(c) && chartoWord[c] != w) return false;
            if (WordtoChar.count(w) && WordtoChar[w] != c) return false;

            chartoWord[c] = w;
            WordtoChar[w] = c;
        }
        return true;
    }
};