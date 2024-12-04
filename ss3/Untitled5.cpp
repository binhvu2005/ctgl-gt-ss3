#include <stdio.h>
#include <string.h>

bool isPalindrome(char str[], int start, int end) {
    if (start >= end) {
        return true; 
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
    int n = strlen(str);
    if (isPalindrome(str, 0, n - 1)) {
        printf("Palindrome valid\n");
    } else {
        printf("Palindrome invalid\n");
    }

    return 0;
}
