#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> pascal(numRows);

        // Iterate over each row to generate Pascal's Triangle.
        for (int i = 0; i < numRows; i++) {
            // Resize the current row to have (i+1) elements, initialize all elements as 1 to ensures that both the first and last elements of each row are 1.
            pascal[i].resize(i + 1, 1);

            // For rows 2 and above (i >= 2), fill the inner elements (not the first or last).
            for (int j = 1; j < i; j++) {
                // Each inner element is the sum of the two elements directly above it in the previous row.
                pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
            }
        }
        return pascal;
    }
};