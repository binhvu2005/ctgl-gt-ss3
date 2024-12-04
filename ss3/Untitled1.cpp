#include <stdio.h>
 
int factorial(int n) {
    if (n == 1)
        return 1;
    else
        return (n * factorial(n - 1));
}
  
int main() {
	int t;
	scanf("%d",&t);
    printf("Giai thua cua %d la: %d",t, factorial(t));
    return 0;
}
