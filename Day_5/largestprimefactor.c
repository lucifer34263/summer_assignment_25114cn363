#include <stdio.h>
long long maxPrimeFactor(long long n) {
    long long maxPrime = -1;

    while (n % 2 == 0) {
        maxPrime = 2;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            maxPrime = i;
            n /= i;
        }
    }
    if (n > 2) {
        maxPrime = n;
    }

    return maxPrime;
}
int main() {
    long long num;
    printf("Enter a number: ");
    if (scanf("%lld", &num) != 1 || num <= 1) {
        printf("Please enter a valid integer greater than 1.\n");
        return 1;
    }

    printf("The largest prime factor is: %lld\n", maxPrimeFactor(num));
    return 0;
}
