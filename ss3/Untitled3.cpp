#include <stdio.h>
 
static int n1 = 0, n2 = 1, n3 = 0;
 
void printFibo(int count) {
    if (count > 0) {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf(" %d", n3);
        printFibo(count - 1);
    }
}
 
int main() {
	int n;
	do{
		printf("nhap so n >2: ");
		scanf("%d",&n);
	}while(n>2);
    printf("%d %d", n1, n2);
    printFibo(n - 2); 
 
    return 0;
}
