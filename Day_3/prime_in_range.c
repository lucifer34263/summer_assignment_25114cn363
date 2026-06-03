#include <stdio.h>
#include <math.h>
int main() {
    int n, i, j, flag;
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);
    printf("Prime numbers between 0 and %d are:\n", n);
    for (i = 2; i <= n; i++) {
        flag = 0;
        for (j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                flag = 1; 
                break;
            }
        }
        if (flag == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
