#include <stdio.h>

void printfArr(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); 
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("Cac phan tu trong mang la: ");
    printfArr(arr, n);

    return 0;
}
