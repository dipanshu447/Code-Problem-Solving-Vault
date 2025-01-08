#include <iostream>
#include <cmath>
using namespace std;

bool checkArmstrong(int n){
	int org = n,count = 0, sum = 0;
	while(n > 0){
		int digit = n % 10;
		count++;
		n /= 10;
	}
	n = org;
	while(n > 0){
		int digit = n % 10;
		sum += pow(digit, count);
		n /= 10;
	}
	return org == sum;
}