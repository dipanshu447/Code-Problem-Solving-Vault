#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> indies;
        for(int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            if(indies.count(complement)){
              return {indies[complement],i}; // returns a temporary vector with the two indices directly. 
            }
            indies[nums[i]] = i;
        }
        return {};
    }
};

int main(){
    // nums = [2,7,11,15], target = 9
    Solution s;
    vector <int> n;
    n.push_back(3);
    n.push_back(2);
    n.push_back(4);
    // n.push_back(15);
    
    vector<int> in =  s.twoSum(n,6);
    cout << in[0]<< endl;
    cout << in[1]<< endl;

    return 0;
}
