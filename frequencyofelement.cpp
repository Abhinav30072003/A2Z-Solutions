class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left = 0, right = 0;
        long long total = 0;
        int result = 0;
        
        while (right < nums.size()) {
            total += nums[right];
            
            while (nums[right] * (right - left + 1) > total + k) {
                total -= nums[left];
                left++;
            }
            
            result = max(result, right - left + 1);
            right++;
        }
        
        return result;
    }
};
