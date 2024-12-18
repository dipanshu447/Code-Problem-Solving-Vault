#include <iostream>
#include <vector>
using namespace std;

// Space Complexity: O(m + n)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> arr3(m + n); // a new vector to store the merged result
        int i = 0, j = 0, k = 0;
        // Compare elements from nums1 and nums2, and add the smaller one to arr3
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                arr3[k++] = nums1[i++];
            } else {
                arr3[k++] = nums2[j++];
            }
        }
        
        // Copy remaining elements from nums1, if any
        while (i < m) {
            arr3[k++] = nums1[i++];
        }

        // Copy remaining elements from nums2, if any
        while (j < n) {
            arr3[k++] = nums2[j++];
        }

        // Assign the merged result back to nums1
        nums1 = arr3;
    }
};

//  Space Complexity: O(1)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;     // last position where it has values instead of zeros
        int j = n - 1;     // last position
        int k = m + n - 1; // last position in nums1

        // merging them from the end
        while (j >= 0) {
            if (i >= 0 && nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];
            } else {
                nums1[k--] = nums2[j--];
            }
        }
    }
};