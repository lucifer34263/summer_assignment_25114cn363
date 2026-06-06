#include<stdio.h>
int main() {
  int a, b=0, c=1, r;
  printf("Enter the Binary number:");
  scanf("%d", &a);
  while(a) {
    r=a%10;
    b=b+r*c;
    a=a/10;
    c*=2;
  }
  printf("The given number in Decimal form is %d" , b);
  return 0;
}