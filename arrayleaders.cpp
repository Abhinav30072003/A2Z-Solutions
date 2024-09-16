#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> leaders(int n, int arr[]) {
        vector<int> result;
        int max_from_right = arr[n - 1];
        result.push_back(max_from_right);
        
        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] >= max_from_right) {
                max_from_right = arr[i];
                result.push_back(max_from_right);
            }
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;

        int arr[n];
        for (long long i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution obj;
        vector<int> v = obj.leaders(n, arr);

        for (auto it = v.begin(); it != v.end(); it++) {
            cout << *it << " ";
        }
        cout << endl;
    }
}
