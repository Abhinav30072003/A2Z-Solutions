#include <stdio.h>
#include <unordered_map>
#include <iostream>
using namespace std;

class Solution{
public:
    int lenOfLongSubarr(int A[], int N, int K) { 
        unordered_map<int, int> prefixSumMap;
        int sum = 0, maxLength = 0;

        for (int i = 0; i < N; i++) {
            sum += A[i];

            if (sum == K) {
                maxLength = i + 1;
            }

            if (prefixSumMap.find(sum - K) != prefixSumMap.end()) {
                maxLength = max(maxLength, i - prefixSumMap[sum - K]);
            }

            if (prefixSumMap.find(sum) == prefixSumMap.end()) {
                prefixSumMap[sum] = i;
            }
        }

        return maxLength;
    } 
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        cout << ob.lenOfLongSubarr(a, n , k) << endl;
    }
    return 0;
}
