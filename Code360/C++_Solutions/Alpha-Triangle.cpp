#include <iostream>
using namespace std;

void alphaTriangle(int n) {
    for(int i = 0; i < n; i++){
        char c = 'A';
        c += n-1;
        for(int j = 0; j <= i; j++){
            cout << c << " "; 
            c--;
        }
        cout << endl;
    }
}