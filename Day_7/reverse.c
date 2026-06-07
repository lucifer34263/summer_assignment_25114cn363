#include<stdio.h>
int rev(int n , int p){
  if (n<=9) {
    return p= n+p;  
  }
  else {
    p+=(n%10);
    return rev(n/10,p*10);
  }
}
int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  printf("%d", rev(n,0));
  return 0;
}