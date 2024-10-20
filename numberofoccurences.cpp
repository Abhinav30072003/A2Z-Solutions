class Solution{
public:	
	int count(int arr[], int n, int x) {
	    int left = 0, right = n - 1, first_occurrence = -1, last_occurrence = -1;

	    while (left <= right) {
	        int mid = left + (right - left) / 2;
	        if (arr[mid] == x) {
	            first_occurrence = mid;
	            right = mid - 1;
	        } else if (arr[mid] < x) {
	            left = mid + 1;
	        } else {
	            right = mid - 1;
	        }
	    }

	    if (first_occurrence == -1) return 0;

	    left = 0, right = n - 1;
	    while (left <= right) {
	        int mid = left + (right - left) / 2;
	        if (arr[mid] == x) {
	            last_occurrence = mid;
	            left = mid + 1;
	        } else if (arr[mid] < x) {
	            left = mid + 1;
	        } else {
	            right = mid - 1;
	        }
	    }

	    return last_occurrence - first_occurrence + 1;
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
