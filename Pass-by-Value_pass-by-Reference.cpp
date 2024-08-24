
#include <stdio.h>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
  public:
    vector<int> passedBy(int a, int &b) {
        int val = a+1;
        b += 2;
        return {val , b};
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        Solution obj;
        vector<int> ans = obj.passedBy(a, b);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
