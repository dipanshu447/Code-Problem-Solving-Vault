#include <iostream>
using namespace std;

void seeding(int n) {
	for(int i = n; i > 0; i--){
		for(int j = 0; j < i; j++){
			cout << "* ";
		}
		cout << endl;
	}
}