#include <stdio.h>
#include <iostream>
using namespace std;
class Solution {
  public:
    void printGfg(int N) {
        if (N == 0) return;
        cout << "GFG ";
        printGfg(N - 1);
    }
};
int main() {
    int T;

    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        Solution ob;
        ob.printGfg(N);
        cout << "\n";
    }
    return 0;
}
