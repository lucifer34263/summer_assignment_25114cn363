#include<stdio.h>
int main() {
  int a, b, c;
  printf("Enter the two positive integers:");
  scanf("%d %d", &a, &b);
  c= (a>b) ? a : b;
  while (1) {
    if (c%a == 0 && c%b == 0) {
      printf("The LCM of the given two number is %d.\n", c);
      break;
    }
  }  
   c++;
return 0;
}