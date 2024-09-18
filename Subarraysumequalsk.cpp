#include <vector>
class Solution {
public:
    int subarraySum(std::vector<int>& nums, int k) {
        int result = 0;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i, sum = 0; j < nums.size(); j++) {
                sum = sum + nums[j];
                if (sum == k) {
                    result = result + 1;
                }
            }
        }
        return result;
    }
};
