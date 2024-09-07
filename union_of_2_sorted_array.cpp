#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
        vector<int> unionResult;
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (arr1[i] < arr2[j]) {
                if (unionResult.empty() || unionResult.back() != arr1[i]) {
                    unionResult.push_back(arr1[i]);
                }
                i++;
            } else if (arr2[j] < arr1[i]) {
                if (unionResult.empty() || unionResult.back() != arr2[j]) {
                    unionResult.push_back(arr2[j]);
                }
                j++;
            } else {
                if (unionResult.empty() || unionResult.back() != arr1[i]) {
                    unionResult.push_back(arr1[i]);
                }
                i++;
                j++;
            }
        }

        while (i < n) {
            if (unionResult.empty() || unionResult.back() != arr1[i]) {
                unionResult.push_back(arr1[i]);
            }
            i++;
        }

        while (j < m) {
            if (unionResult.empty() || unionResult.back() != arr2[j]) {
                unionResult.push_back(arr2[j]);
            }
            j++;
        }

        return unionResult;
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;

        int arr1[N], arr2[M];

        for (int i = 0; i < N; i++) {
            cin >> arr1[i];
        }

        for (int i = 0; i < M; i++) {
            cin >> arr2[i];
        }

        Solution ob;
        vector<int> ans = ob.findUnion(arr1, arr2, N, M);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }

    return 0;
}
