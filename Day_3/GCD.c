#include<stdio.h>
int main() {
  int a, b, c, n, i;
  printf("Enter two numbers:");
  scanf("%d %d", &a, &b);
  c=a;
  n=b;
  while (b!=0) {
    i=b;
    b=a%b;
    a=i;
  }
  printf("The GCD of the given two number is: %d", c);
  return 0;
}