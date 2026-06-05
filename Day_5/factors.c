#include<stdio.h>
int main() {
  int a, b, c, i;
  printf("Enter the number to print its factor:");
  scanf("%d", &a);
  b=a;
  printf("the factors of the given number are:");
  for (i=1 ; i<b ; i++ ) {
    if ( a%i==0 ) {
      printf("%d\n", i);
    }
  }
}