#include<stdio.h>
int main() {
  int a, b, n, fact=1;
  printf("Enter the number to get its factorial:");
  scanf("%d",&a);
  b=a+1;
  for (n=1 ; n<b ; n++ ) {
    fact*=n;
  }
  printf("The factorial of the given number is: %d",fact);
return 0;
}