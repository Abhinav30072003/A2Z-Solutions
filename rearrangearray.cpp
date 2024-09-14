class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> result(nums.size());
        int pos_idx = 0, neg_idx = 1;
        
        for (int num : nums) {
            if (num > 0) {
                result[pos_idx] = num;
                pos_idx += 2;
            } else {
                result[neg_idx] = num;
                neg_idx += 2;
            }
        }
        
        return result;
    }
};
