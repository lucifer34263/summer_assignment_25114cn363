#include<stdio.h>
int main() {
  int a, i, j;
  printf("Enter the number:");
  scanf("%d", &a);
  for (i=1 ; i<=a ; i++) {
    for (j=1 ; j<=a-i+1; j++ ) {
      printf("%d", j);
    }
    printf("\n");
  }
  return 0;
}