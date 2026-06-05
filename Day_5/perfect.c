#include<stdio.h>
int main() {
  int a, b, c=0, i;
  printf("Enter the number:");
  scanf("%d", &a);
  b=a;
  for (i=1 ; i<a ; i++) {
    if (a%i==0) {
      c+=i;
    }
  }
  if( b==c ) {
    printf("The number is perfect.");
  }
  else {
    printf("The number is not perfect.");
  }
  return 0;
  }
