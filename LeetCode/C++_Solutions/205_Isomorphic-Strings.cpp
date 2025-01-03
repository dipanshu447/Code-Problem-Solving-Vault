#include <iostream>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;

        // Arrays to store mappings
        char mapS[128] = {0}; 
        char mapT[128] = {0};

        for(int i = 0; i < s.size(); i++){
            char chS = s[i], chT = t[i];

            // Check for mapping conflicts            
            if((mapS[chS] && mapS[chS] != chT) || (mapT[chT] && mapT[chT] != chS)) return false;

            // Update mappings
            mapS[chS] = chT;
            mapT[chT] = chS;
        }
        return true; // No conflicts, strings are isomorphic
    } 
};