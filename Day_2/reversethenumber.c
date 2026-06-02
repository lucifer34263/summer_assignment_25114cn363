#include<stdio.h>
int main() {
  int a, n, b, i;
  printf("Enter the number:");
  scanf("%d",&a);
  b=a;
  while (b>0) {
    n=b%10;
    i=(i*10)+n;
    b=b/10;
  }
printf("The reverse of the given number is;%d",i);
return 0;
}