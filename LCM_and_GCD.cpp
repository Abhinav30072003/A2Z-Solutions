
#include <stdio.h>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
  public:
  
  long long gcd(long long a, long long b) {
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    
    vector<long long> lcmAndGcd(long long A , long long B) {
        long long gcd_value = gcd(A, B);
        long long lcm_value = (A * B) / gcd_value;
        return {lcm_value, gcd_value};
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}