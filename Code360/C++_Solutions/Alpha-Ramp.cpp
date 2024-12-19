#include <iostream>
using namespace std;

void alphaRamp(int n) {
    char c = 65;
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            cout << c << " ";
        }
        c++;
        cout << endl;
    }
}
