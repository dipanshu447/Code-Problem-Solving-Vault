#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> intersec;
        int i = 0, j = 0, num1Size = nums1.size(), num2Size = nums2.size();
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        while(i < num1Size && j < num2Size){
            if(nums1[i] == nums2[j]){
                intersec.push_back(nums1[i]);
                i++, j++;
            }else if(nums1[i] > nums2[j]){
                j++;
            } else {
                i++;
            }
        }
        return intersec;
    }
};