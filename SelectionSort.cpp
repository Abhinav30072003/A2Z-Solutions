#include <stdio.h>
#include <iostream>
using namespace std;

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

class Solution {
public:
    int select(int arr[], int i, int n) {
        int min_idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        return min_idx;
    }

    void selectionSort(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            int min_idx = select(arr, i, n);
            swap(&arr[i], &arr[min_idx]);
        }
    }
};

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int arr[1000], n, T, i;

    scanf("%d", &T);

    while (T--) {
        scanf("%d", &n);

        for (i = 0; i < n; i++)
            scanf("%d", &arr[i]);

        Solution ob;  
        ob.selectionSort(arr, n);
        printArray(arr, n);
    }
    return 0;
}
