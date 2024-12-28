#include <iostream>
#include <algorithm>
using namespace std;

void getNumberPattern(int n) {
    int size = 2 * n - 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            int val = n - min({i,j,size-i-1,size-j-1});
            cout << val;
        }
        cout << endl;
    }
}