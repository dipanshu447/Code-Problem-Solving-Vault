#include <iostream>
using namespace std;

int countDigits(int n){
	int org = n, count = 0;
    while(n > 0)
    {
        int d = n % 10;
        if (d != 0 && org % d == 0)
        {
            count++;
        }
        n /= 10;
    }
	return count;
}