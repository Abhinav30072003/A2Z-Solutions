#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    long long mergeAndCount(vector<long long>& arr, int left, int mid, int right) {
        vector<long long> temp;
        int i = left, j = mid + 1;
        long long count = 0;
        
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
            else {
                temp.push_back(arr[j++]);
                count += (mid - i + 1);
            }
        }
        while (i <= mid) temp.push_back(arr[i++]);
        while (j <= right) temp.push_back(arr[j++]);
        
        for (int k = left; k <= right; k++) arr[k] = temp[k - left];
        
        return count;
    }
    
    long long mergeSortAndCount(vector<long long>& arr, int left, int right) {
        if (left >= right) return 0;
        int mid = left + (right - left) / 2;
        return mergeSortAndCount(arr, left, mid) + mergeSortAndCount(arr, mid + 1, right) + mergeAndCount(arr, left, mid, right);
    }
    
    long long int inversionCount(vector<long long>& arr) {
        return mergeSortAndCount(arr, 0, arr.size() - 1);
    }
};

int main() {
    long long T;
    cin >> T;
    cin.ignore();
    while (T--) {
        int n;
        vector<long long> a;
        string input;
        getline(cin, input);
        stringstream ss(input);
        long long num;
        while (ss >> num)
            a.push_back(num);
        Solution obj;
        cout << obj.inversionCount(a) << endl;
    }
    return 0;
}
