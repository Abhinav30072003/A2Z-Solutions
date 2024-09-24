//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution {
public:
    int maxLen(vector<int>& arr, int n) {
        unordered_map<int, int> cumSumMap;
        int cumSum = 0;
        int maxLength = 0;

        for (int i = 0; i < n; i++) {
            cumSum += arr[i];

            if (cumSum == 0) {
                maxLength = i + 1;
            }

            if (cumSumMap.find(cumSum) != cumSumMap.end()) {
                int length = i - cumSumMap[cumSum];
                maxLength = max(maxLength, length);
            } else {
                cumSumMap[cumSum] = i;
            }
        }

        return maxLength;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i) {
            cin >> array1[i];
        }
        Solution ob;
        cout << ob.maxLen(array1, m) << endl;
    }
    return 0;
}

// } Driver Code Ends