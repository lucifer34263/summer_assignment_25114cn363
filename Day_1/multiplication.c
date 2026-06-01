#include<stdio.h>
int main() {
  int a, b, c;
  printf("Enter the number to print its table:");
  scanf("%d", &c);
  for (a=1 ; a<11 ;a++) {
    b= a*c;
    printf("%d x %d = %d\n",c ,a ,b);
  }
  return 0;
}