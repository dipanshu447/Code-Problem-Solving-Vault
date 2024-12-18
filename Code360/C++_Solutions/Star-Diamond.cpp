#include <iostream>
using namespace std;

void nStarDiamond(int n) {
   for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout << " ";
        }
        for(int k = 0; k <= 2*i; k++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = n; i > 0; i--){
        for (int k = n-i; k > 0; k--)
        {
            cout << " ";
        }
        for(int j = 2*i-1; j > 0; j--){
            cout << "*";
        }
        cout << endl;
    }
}