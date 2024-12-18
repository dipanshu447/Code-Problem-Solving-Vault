#include <iostream>
using namespace std;

class Solution {
public:
// Calculate the sum of the squares of the digits of a number
    int sumOfSquare(int num) {
        int sum = 0;
        while (num > 0) {
            int digit = num % 10; // Extract the last digit
            sum += digit * digit; // Add square of the digit to sum
            num /= 10; // Remove the last digit
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n, fast = n;
        while (true) {
            slow = sumOfSquare(slow); // Move slow one step
            fast = sumOfSquare(sumOfSquare(fast)); // Move fast two steps
            if (fast == 1) { // If fast reaches 1, the number is happy
                return true;
            }
            if (slow == fast) { // If slow meets fast, a cycle is detected
                return false;
            }
        }
        return false;
    }
};