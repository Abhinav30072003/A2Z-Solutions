#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int pairWithMaxSum(vector<int> &arr) {
        int max_sum = 0;
        for (int i = 1; i < arr.size(); i++) {
            max_sum = max(max_sum, arr[i] + arr[i - 1]);
        }
        return max_sum;
    }
};

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);

    while (t--) {
        string line;
        getline(cin, line);
        stringstream ss(line);
        vector<int> nums;
        int num;
        while (ss >> num) {
            nums.push_back(num);
        }
        Solution ob;
        cout << ob.pairWithMaxSum(nums) << endl;
    }
    return 0;
}
