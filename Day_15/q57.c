#include<stdio.h> 
int main() {
  int arr[5], i, j, a;
  printf("Enter five elements:");
  for (i=0 ; i<5 ; i++) scanf("%d" , &arr[i]);
  for (i=0 , j=4; i<j; i++,j--) {
    a= arr[i];
    arr[i]= arr[j];
    arr[j]=a;
  }
  for (i=0 ; i<5 ;i++) printf("%d ", arr[i]);
  return 0;
}
