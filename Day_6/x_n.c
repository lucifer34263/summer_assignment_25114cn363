#include<stdio.h>
int main() {
  int a, i, n, x=1;
  printf("Enter the number (Base):");
  scanf("%d", &a);
  printf("Enter the power (Exponential):");
  scanf("%d", &n);
  for (i=1 ; i<=n ; i++) {
    x*=a;
  }
  printf("Value of %d^%d is %d", a, n, x);
  return 0;
}