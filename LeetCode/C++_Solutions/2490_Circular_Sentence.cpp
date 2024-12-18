#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isCircularSentence(string sentence)
    {
        vector<string> word;
        stringstream sw(sentence);  // stringstream, basically works exactly like cout and cin but its taking input from string and reading into string also
        string s;
        while (sw >> s)
        {
            word.push_back(s);
        }

        for (int j = 0; j < word.size() - 1; j++)
        {
            if (word[j].back() != word[j + 1].front())
            {
                return false;
            }
        }

        return (word.front().front() == word.back().back());
    }
};