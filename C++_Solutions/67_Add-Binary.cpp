#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1, j = b.size() - 1, carry = 0;
        string result;
        string f;
        while (j >= 0 || i >= 0 || carry) {
            int sum = carry;
            if (i >= 0) {
                sum += a[i--] - '0';
            }
            if (j >= 0) {
                sum += b[j--] - '0';
            }
            result += (sum % 2) + '0';
            carry = sum / 2;
        }
        for (int i = result.size() - 1; i >= 0; i--) {
            f += result[i];
        }
        return f;
    }
};