#include <stdio.h>

void findSum(int a, int b, int *result) {
    *result = a + b;
}

int main() {
    int x = 10, y = 20, sum;
    printf(" x = %d, y = %d\n", x, y);
    findSum(x, y, &sum);
    printf("Tong x và y là: %d\n", sum);

    return 0;
}
