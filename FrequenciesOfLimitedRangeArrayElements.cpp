//{ Driver Code Starts
#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    void frequencyCount(vector<int>& arr, int N, int P) {
        vector<int> freq(N + 1, 0);
        for (int i = 0; i < N; i++) {
            if (arr[i] >= 1 && arr[i] <= N) {
                freq[arr[i]]++;
            }
        }

        for (int i = 1; i <= N; i++) {
            arr[i - 1] = freq[i];
        }
    }
};

int main() {
    long long t;
    cin >> t;

    while (t--) {

        int N, P;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }
        cin >> P;
        Solution ob;
        ob.frequencyCount(arr, N, P);
        for (int i = 0; i < N; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
