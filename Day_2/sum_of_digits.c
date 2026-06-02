#include<stdio.h>
int main() {
  int a, b, i, sum=0;
  printf("Enter the number:");
  scanf("%d",&a);
  b=a;
  while (b>0) {
    i=b%10;
    sum+=i;
    b=b/10;
  }
printf("Sum of the digits of the number is:%d",sum);
return 0;
}