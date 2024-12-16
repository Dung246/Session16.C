#include <stdio.h>

void updateNum(int *arr, int size, int index, int newValue) {
    if (index >= 0 && index < size) {
        *(arr + index) = newValue;
    } else {
        printf("Vi tri cap nhat khong hop le!\n");
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    int index = 2; 
    int newValue = 10;
    updateNum(arr, n, index, newValue);

    printf("\nMang sau khi cap nhat: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
