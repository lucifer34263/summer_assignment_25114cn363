#include<stdio.h>
int main(){
  int n,sum=0,i;
  printf("Enter the number you want the usum upto:");
  scanf("%d",&n);
  for (i=0;i<n+1;i++){
    sum+=i;
  }
  printf("The sum upto the given number is %d",sum);
  return 0;
}