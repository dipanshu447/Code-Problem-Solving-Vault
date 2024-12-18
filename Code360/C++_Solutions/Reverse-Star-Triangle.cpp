#include <iostream>
using namespace std;

void nStarTriangle(int n) {
    for(int i = n; i > 0; --i){
        cout << string(n-i, ' ');
        cout << string(2*i-1, '*') << endl;
    }
}