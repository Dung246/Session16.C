#include <stdio.h>

int main() {
    int x = 4;
    int *ptr = &x;

    printf("Gia tri cua x la: %d\n", x);
    printf("Dia chi cua x la: %p\n", &x);
    
    printf("Gia tri cua x la: %d\n", *ptr); 
    printf("Dia chi cua x la: %p\n", ptr); 

    return 0;
}
