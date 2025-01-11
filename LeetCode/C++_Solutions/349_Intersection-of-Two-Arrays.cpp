#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersec;
        set<int> unique;
        for(int num : nums1){
            unique.insert(num);
        }
        for(int i = 0; i < nums2.size(); i++){
            auto it = unique.find(nums2[i]);
            if(it != unique.end()){
                intersec.push_back(*it);
                unique.erase(it);
            }
        }
        return intersec;
    }
};