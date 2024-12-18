#include <iostream>
using namespace std;

void nLetterTriangle(int n) {
    for (int i = n; i > 0; i--)
    {
        char c = 65;
        for (int j = 0; j < i; j++)
        {
           cout << c << " ";
           c++;
        }
        cout << endl;
    }
}