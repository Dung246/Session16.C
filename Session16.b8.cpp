#include <stdio.h>
#include <string.h>

void turnString(char *str) {
    int len = strlen(str);
    char *start = str;
    char *end = str + len - 1;
    char temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char inputString[100];
    char reverseString[100];
    printf("Nhap vao mot chuoi: ");
    fgets(inputString, 100, stdin);
    inputString[strcspn(inputString, "\n")] = '\0';
    strcpy(reverseString, inputString);
    turnString(reverseString);
     printf("Chuoi ban dau: %s\n", inputString);
     printf("Chuoi dao nguoc: %s\n", reverseString);
 
    return 0;
}
