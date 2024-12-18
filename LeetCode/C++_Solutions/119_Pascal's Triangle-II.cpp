#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        // Initialize the vector with size (rowIndex + 1) and all elements as 1
        vector<int> row(rowIndex+1,1);

        // Start updating values row by row
        for(int i = 1; i < rowIndex; i++){
            for(int j = i; j > 0; --j){
                // Update the row from back to front to prevent overwriting earlier values
                row[j] += row[j-1];
            }
        }
        return row;
    }
};