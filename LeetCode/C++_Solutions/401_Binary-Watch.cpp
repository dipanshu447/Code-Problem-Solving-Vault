#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;
        // Iterate through all possible hours (0 to 11)
        for (int hour = 0; hour < 12; hour++) {
            // Iterate through all possible minutes (0 to 59)
            for (int minute = 0; minute < 60; minute++) {
                 // Count total number of 1s in hour and minute
                if(__builtin_popcount(hour) + __builtin_popcount(minute) == turnedOn){
                     // Format the time as "H:MM"
                    res.push_back(to_string(hour) + ":" + (minute < 10 ? "0" : "") + to_string(minute));
                }
            }
        }
        return res;
    }
};