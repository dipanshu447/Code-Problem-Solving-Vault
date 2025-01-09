#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
public:
    string addStrings(string num1, string num2) {
        int i = num1.size()-1;
        int j = num2.size()-1;
        int carry = 0;
        string sum;
        while(i >= 0 || j >= 0 || carry){
            int n1 = (i >= 0) ? num1[i] - 48 : 0;
            int n2 = (j >= 0) ? num2[j] - 48 : 0;
            int num = n1 + n2 + carry;
            sum.push_back(num % 10 + 48);
            carry = num / 10;
            i--;
            j--;
        }
        reverse(sum.begin(),sum.end());
        return sum;
    }
};