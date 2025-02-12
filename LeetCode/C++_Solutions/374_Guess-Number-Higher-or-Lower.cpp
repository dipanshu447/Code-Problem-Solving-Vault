#include <iostream>
using namespace std;

/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */
int guess(int n); // comment before running in leetcode

// efficient solution 
class Solution {
public:
    int guessNumber(int n) {
        int l = 1, r = n,m;
        while(l <= r){
            m = l + (r - l) / 2; // Prevent overflow
            if(guess(m) == 0){
                return m;
            }else if(guess(m) == -1){
                r = m - 1;
            }else {
                l = m + 1;
            }
        }
        return -1;
    }
};

// little less efficient using do while
class Solution {
public:
    int guessNumber(int n) {
        int l = 1, r = n, res,m;
        do{
            m = l + (r - l) / 2; // Prevent overflow
            res = guess(m); 
            if(res == -1) r = m - 1;
            else if(res == 1) l = m + 1;
        }while(res != 0);
        return m;
    }
};