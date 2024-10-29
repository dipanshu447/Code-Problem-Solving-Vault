#include <iostream>
#include <map>
using namespace std;

class Solution
{
public:
    map<char, int> roman_int;
    // The member variables are part of an object, and the object's lifetime is managed differently from local variables in a function. Member variables are initialized when the object is constructed, so their initialization needs to happen in this way :
    Solution()
    {
        roman_int['I'] = 1;
        roman_int['V'] = 5;
        roman_int['X'] = 10;
        roman_int['L'] = 50;
        roman_int['C'] = 100;
        roman_int['D'] = 500;
        roman_int['M'] = 1000;
    }
    int romanToInt(string s)
    {
        int num = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (roman_int.find(s[i]) != roman_int.end())
            {
                // subtractive notation rule ->
                // I can be placed before V (5) and X (10) to make 4 and 9.
                // X can be placed before L (50) and C (100) to make 40 and 90.
                // C can be placed before D (500) and M (1000) to make 400 and 900.
                
                if ((s[i] == 'I' && s[i + 1] == 'V') || (s[i] == 'I' && s[i + 1] == 'X'))
                {
                    num += roman_int[s[i + 1]] - roman_int[s[i]];
                    i++;
                }
                else if ((s[i] == 'X' && s[i + 1] == 'L') || (s[i] == 'X' && s[i + 1] == 'C'))
                {
                    num += roman_int[s[i + 1]] - roman_int[s[i]];
                    i++;
                }
                else if ((s[i] == 'C' && s[i + 1] == 'D') || (s[i] == 'C' && s[i + 1] == 'M'))
                {
                    num += roman_int[s[i + 1]] - roman_int[s[i]];
                    i++;
                }
                else
                {
                    num += roman_int[s[i]];
                }
            }
        }
        return num;
    }
};