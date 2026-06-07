#include<stdio.h>
int sum( int n);
int main() {
  int n;
  printf("Enter the number: ");
  scanf("%d", &n);
  int res= sum(n);
  printf("\n The sum of the digits is %d" ,res);
  return 0;

}
int sum( int n) {
  if(n == 0) {
    return 0;
  
  }
  return (n%10 + sum(n/10));
}
