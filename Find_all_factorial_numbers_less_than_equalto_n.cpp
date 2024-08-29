#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    vector<long long> factorialNumbers(long long n) {
        vector<long long> result;
        long long factorial = 1;
        int i = 1;

        while (factorial <= n) {
            result.push_back(factorial);
            i++;
            factorial *= i;
        }

        return result;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for (auto num : ans) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
