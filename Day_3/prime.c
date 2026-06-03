#include <stdio.h>
#include <math.h>
int main() {
int n, i, f = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);
 if (n <= 1) {
   f = 1;
  } else {
     for (i = 2; i <= sqrt(n); i++) {
         if (n % i == 0) {
            f = 1;
              break;
            }
        }
    }

    if (f == 0)
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}
