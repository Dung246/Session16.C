#include <stdio.h>

void add(int arr[], int *n, int index, int value) {
    if (index >= 0 && index <= *n) {
        for (int i = *n - 1; i >= index; i--) {
            arr[i + 1] = arr[i];
        }
        arr[index] = value;
        (*n)++; 
    } else {
        printf("Vi tri chen khong hop le!\n");
    }
}
int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = 2;
    int value = 3;

    printf("Mang ban dau: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    add(arr, &n, index, value);
    printf("Mang sau khi them: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
