#include <stdio.h>
#include <vector>
#include <sstream>
#include <iostream>
using namespace std;

class Solution {
  public:
    int print2largest(vector<int> &arr) {
        int first = -1, second = -1;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > first) {
                second = first;
                first = arr[i];
            } else if (arr[i] > second && arr[i] != first) {
                second = arr[i];
            }
        }
        return second;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution ob;
        int ans = ob.print2largest(arr);
        cout << ans << endl;
    }
    return 0;
}
