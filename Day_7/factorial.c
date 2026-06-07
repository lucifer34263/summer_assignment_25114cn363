#include<stdio.h>
int fact(num) {
  if (num)
    return(num* fact(num - 1)) ;
  else 
    return 1;

} 
int main() {
  int num;
   printf("Enter the positive number: ");
   scanf("%d", &num);
    printf("\nFactorial of %d is %d\n", num, fact(num));
    return 0;


}