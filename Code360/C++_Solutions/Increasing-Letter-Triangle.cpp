#include <iostream>
using namespace std;

void nLetterTriangle(int n) {
    for (int i = 0; i < n; i++)
    {
        char c = 65;
        for (int k = 0; k <= i; k++)
        {
            cout << c << " ";
            c++;
        }
        cout << endl;
    }
}