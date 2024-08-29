#include <stdio.h>
#include <iostream>
using namespace std;

class Solution {
  public:
    void printNos(int N) {
        if (N == 0) return;
        cout << N << " ";
        
        printNos(N - 1);
    }
};
int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;

        cin >> N;
        Solution ob;

        ob.printNos(N);
        cout << "\n";
    }
    return 0;
}