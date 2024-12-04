#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverseString(char str[], int start, int end) {
    if (start >= end) {
        return;
    }
    swap(&str[start], &str[end]);
    reverseString(str, start + 1, end - 1);
}


 main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);

    int n = strlen(str);
    reverseString(str, 0, n - 1);

    printf("Chuoi dao nguoc: %s\n", str);

    return 0;
}
