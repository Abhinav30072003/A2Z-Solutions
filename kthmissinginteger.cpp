class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingCount = 0, current = 1, index = 0;

        while (true) {
            if (index < arr.size() && arr[index] == current) {
                index++;
            } else {
                missingCount++;
                if (missingCount == k) return current;
            }
            current++;
        }
    }
};
