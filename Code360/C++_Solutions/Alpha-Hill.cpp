#include <iostream>
using namespace std;

void alphaHill(int n) {
    for (int i = 0; i < n; i++)
    {
        char c = 65;
        for (int k = 0; k < n - i - 1; k++)
        {
            cout << " " << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
            c++;
        }
        c -= 2;
        for (int l = 0; l < i; l++)
        {
            cout << c << " ";
            c--;
        }

        cout << endl;
    }
}