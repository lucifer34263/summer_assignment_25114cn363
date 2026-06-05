#include<stdio.h>
int main() {
  int a, num, b, c, sum=0, i;
  printf("Enter the number:");
  scanf("%d", &a);
  num=a;
  while (a>0) {
    b=a%10;
    c=1;
    for (i=b ; i>0 ; i--) {
      c*=i;
    }
    sum+=c;
    a=a/10;
  } 
  if (sum==num){
    printf("The given number is strong.");
  }
  else {
    printf("The given number is not strong.");
  }
  return 0;
}