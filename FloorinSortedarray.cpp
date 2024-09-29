#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int findFloor(vector<long long> &v, long long n, long long x) {
        int low = 0, high = n - 1;
        int result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (v[mid] <= x) {
                result = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return result;
    }
};

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        long long x;
        cin >> x;

        vector<long long> v;

        for (long long i = 0; i < n; i++) {
            long long temp;
            cin >> temp;
            v.push_back(temp);
        }
        Solution obj;
        cout << obj.findFloor(v, n, x) << endl;
    }

    return 0;
}
