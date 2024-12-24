#include <iostream>
using namespace std;

void symmetry(int n) {
    // top part
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << "*" << " ";
        }
        for (int k = 0; k < i*2; k++)
        {
            cout << " " << " ";
        }
        for (int l = 0; l < n-i; l++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
    // bottom part
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << "*" << " ";
        }
        for (int k = 2*i; k > 0; k--)
        {
            cout << " " << " ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}