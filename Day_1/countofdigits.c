#include<stdio.h>
int main() {
  int a, b, n, count=0;
  printf("Enter the digits to print its count:");
  scanf("%d",&a);
  b=a;
  while (b>0) {
    b/10;
    count+=1;
  }
printf("The count of the give digit is %d", count);
return 0;
}