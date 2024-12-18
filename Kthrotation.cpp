#include <vector>
#include <iostream>
#include <sstream>

class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        int low = 0, high = arr.size() - 1;
        
        if (arr[low] <= arr[high]) return 0;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > arr[mid + 1]) return mid + 1;
            if (arr[mid - 1] > arr[mid]) return mid;

            if (arr[mid] >= arr[low]) low = mid + 1;
            else high = mid - 1;
        }

        return 0;
    }
};

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input1;
        getline(cin, input1);
        stringstream ss1(input1);
        int number1;
        while (ss1 >> number1) {
            arr.push_back(number1);
        }
        Solution ob;
        int res = ob.findKRotation(arr);
        cout << res << endl;
        cout << "~" << endl;
    }
}
