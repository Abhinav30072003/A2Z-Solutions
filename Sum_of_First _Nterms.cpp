#include <stdio.h>
#include <iostream>
using namespace std;

class Solution {
  public:
    long long sumOfSeries(long long n) {
        long long sum_n = (n * (n + 1)) / 2;
        return sum_n * sum_n;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long N;
        cin >> N;
        Solution ob;
        cout << ob.sumOfSeries(N) << "\n";
    }
}
