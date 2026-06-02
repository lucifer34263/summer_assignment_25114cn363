#include<stdio.h>
int main() {
  int a, b, n, p=1;
  printf("Enter the number:");
  scanf("%d",&a);
  b=a;
  while (b>0) {
    n=b%10;
    p*=n;
    b=b/10;
  }
printf("The product of the digits of the given number is:%d",p);
}