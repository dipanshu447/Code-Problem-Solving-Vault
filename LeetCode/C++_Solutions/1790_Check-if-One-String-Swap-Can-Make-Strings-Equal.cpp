#include <iostream>
#include <vector>
using namespace std;

// efficient solution 
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        int size = s1.size();
        for(int i = 0, count = 0, first; i < size; i++){
            if(s1[i] != s2[i]){
                count++;
                if(count == 1){
                    first = i;
                }else{
                    char temp = s2[first];
                    s2[first] = s2[i];
                    s2[i] = temp;
                    break;
                }
            }
        }
        return s1 == s2;
    }
};

// original not efficient solution
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1 == s2) return true;
        vector<int> diffIndex;
        for(int i = 0; i < s1.size(); i++){
            if(s1[i] != s2[i]){
                diffIndex.push_back(i);
            }
        }
        if(diffIndex.size() != 2) return false;
        int i = diffIndex[0], j = diffIndex[1];
        swap(s2[i], s2[j]);
        return s1 == s2;
    }
};