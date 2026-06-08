#include<stdio.h>
int main() {
  int n, i, j, d;
  printf("Enter the number of rows: ");
  scanf("%d", &n);
  for (i=1 ; i<=n ; i++) {
    int a=1;
    for (j=1 ; j<=i ; j++) {
      d=a+64;
     char ch = (char)d;
     printf("%c",ch);
     a++;
    }
   printf("\n");
  }

}