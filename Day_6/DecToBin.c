#include<stdio.h>
int main() {
  int n, r, j, i=0;
  int a[32];
  printf("Enter the number in decimal:");
  scanf("%d", &n);
  while (n) {
    r=n%2;
    n=n/2;
    a[i]=r;
    i++;
  }
  printf("The given number in binary is: ");
  for ( int j=i-1; j>=0; j-- ) {
    printf("%d" , a[j]);
  }
  printf("\n");
  return 0;
}