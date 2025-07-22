#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for(int i = 0; i < nums.size(); i++) {
            result = result ^ nums[i];
        }
        return result;
    }
};

int main() {
    Solution s;
    vector<int> nums = {4, 16, 10, 4, 16};
    cout << s.singleNumber(nums) << endl;
    return 0;
}