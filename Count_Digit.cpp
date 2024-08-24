#include<stdio.h>
#include<iostream>
using namespace std;

class Solution{
public:
    int evenlyDivides(int N){
        int count = 0;
        int originN = N;
        while (N > 0) {
            int digit = N % 10;
            N /= 10;
            if (digit != 0 && originN % digit == 0) {
                count++;
            }
        }
        return count;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
