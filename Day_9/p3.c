#include<stdio.h>
int main() {
  int a, i, j, d;
  printf("Enter the number:");
  scanf("%d", &a);
  for (i=0 ; i<=a ; i++) {
    int n=1;
    for (j=0 ; j<=a; j++ ) {
      d=a+n;
      printf("%c", &d);
    }
    printf("\n");
  }
  return 0;
}