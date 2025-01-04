#include <iostream>
using namespace std;

bool palindrome(int n)
{   
    int org = n;
    int revNum = 0;
    while(n > 0){
        int digit = n % 10;
        revNum = revNum*10 + digit;
        n /= 10;
    }
    return org == revNum;
}