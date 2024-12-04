#include <stdio.h>

int tinh_tong(int n, int m) {
    if (n == m) {
        return n;
    } else {
        return n + tinh_tong(n+1, m);
    }
}

int main() {
    int n, m;

    printf("Nhap n va m (n < m): ");
    scanf("%d %d", &n, &m);

    int tong = tinh_tong(n, m);
    printf("Tong cac so tu %d den %d la: %d\n", n, m, tong);

    return 0;
}
