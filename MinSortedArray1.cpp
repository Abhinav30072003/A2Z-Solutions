class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        if (nums[low] <= nums[high]) return nums[low];

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[mid + 1]) return nums[mid + 1];
            if (nums[mid - 1] > nums[mid]) return nums[mid];

            if (nums[mid] >= nums[low]) low = mid + 1;
            else high = mid - 1;
        }

        return nums[0];
    }
};
