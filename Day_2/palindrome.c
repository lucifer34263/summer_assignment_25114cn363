#include<stdio.h>
int main() {
  int a, i=0, n, b;
  printf("Enter the number:");
  scanf("%d",&a);
  b=a;
  while (b>0) {
    n=b%10;
    i=(i*10)+n;
    b=b/10;
  }
  if (i==a) {
    printf("The given number is a palindrome.");
  }
  else {
    printf("The given number is not a palindrome.");
  }
  }
