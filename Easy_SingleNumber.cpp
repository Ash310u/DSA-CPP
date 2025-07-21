#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
    int singleNumber(vector<int>& nums) {
        for(int num : nums) {
            int result = 0;
            for(int i = 0; i < nums.size(); i++) {
                if(nums[i] == num) {
                    result++;
                }
            }
            if(result == 1) {
                return num;
            }
        }
        return 0;
    }
};

int main() {
    Solution s;
    vector<int> nums = {2, 2, 1};
    cout << s.singleNumber(nums) << endl;
    return 0;
}