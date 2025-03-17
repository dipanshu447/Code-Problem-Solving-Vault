#include <iostream>
using namespace std;

class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int row = grid.size(), column = grid[0].size(), perimeter = 0;
        for (int r = 0; r < row; r++) {
            for (int c = 0; c < column; c++) {
                if (grid[r][c] == 1) {
                    if (r == 0 || grid[r - 1][c] == 0) perimeter++; // top
                    if (r == row - 1 || grid[r + 1][c] == 0) perimeter++; // bottom
                    if (c == column - 1 || grid[r][c + 1] == 0) perimeter++; // right
                    if (c == 0 || grid[r][c - 1] == 0) perimeter++; // left
                }
            }
        }
        return perimeter;
    }
};