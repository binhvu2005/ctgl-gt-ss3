#include <stdio.h>

int combination(int n, int k) {
    if (k == 0 || n == k) {
        return 1;
    } else {
        return combination(n - 1, k - 1) + combination(n - 1, k);
    }
}

int main() {
    int n, k;
    printf("Nhap n va k: ");
    scanf("%d %d", &n, &k);

    if (k > n) {
        printf("K phai nho hon hoac bang n!\n");
    } else {
        int result = combination(n, k);
        printf("C(%d, %d) = %d\n", n, k, result);
    }

    return 0;
}
