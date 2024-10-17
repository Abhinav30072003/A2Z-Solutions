#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> getFloorAndCeil(int x, vector<int> &arr) {
        int floor = -1, ceil = -1;
        for (int num : arr) {
            if (num <= x) floor = max(floor, num);
            if (num >= x) ceil = (ceil == -1) ? num : min(ceil, num);
        }
        return {floor, ceil};
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        int x;
        string input;
        cin >> x;
        cin.ignore();

        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;
        auto ans = ob.getFloorAndCeil(x, arr);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
