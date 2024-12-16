#include <stdio.h>

int finding(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int arr[] = {1, 2, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    int position = finding(arr, n, x);
    if (position != -1) {
        printf("Phan tu %d co o vi tri %d trong mang\n", x, position);
    } else {
        printf("Khong tim thay phan tu %d trong mang\n", x);
    }

    return 0;
}
