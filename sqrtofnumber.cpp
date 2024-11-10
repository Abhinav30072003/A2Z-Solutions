
#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int floorSqrt(int n) {
       int low = 1, high = n, ans = 0;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (mid <= n / mid) {
                ans = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;  
        }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        Solution obj;
        cout << obj.floorSqrt(n) << endl;

        cout << "~"
             << "\n";
    }
    return 0;
}
