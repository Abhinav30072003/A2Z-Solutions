#define _USE_MATH_DEFINES
#include<stdio.h>
#include<iostream>
#include<math.h>
#include<vector>
#include<iomanip>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%lf ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        cout<<setprecision(3)<<fixed;
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};


class Solution {
  public:
    double switchCase(int choice, vector<double> &arr){
        double area;
        switch (choice) {
            case 1:
                area = M_PI*arr[0]*arr[0];
            case 2:
                area = arr[0]*arr[1];
        }
        return area;
    }
};


int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int choice;
        scanf("%d",&choice);
        
        
        vector<double> arr(choice);
        Array::input(arr,choice);
        
        Solution obj;
        double res = obj.switchCase(choice, arr);

        if(res == int(res)){
            cout<<int(res)<<endl;
            continue;
        }
        cout<<setprecision(2)<<fixed;

            cout<<res<<endl;
        
    }
}
