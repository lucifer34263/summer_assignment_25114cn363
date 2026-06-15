#include<stdio.h> 
int main() {
  int n=0, i, j, a;
  printf("ENTER THE SIZE OF ARRAY:"); 
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements:");
  for (i=0 ; i<n ; i++) scanf("%d" , &arr[i]);
  a= arr[n-1];
  for (i=n-1 ; i>0; i--) arr[i]= arr[i-1];
  arr[0]=a;
  printf("Shifted array by one place to the rightt:");
  for (i=0 ; i<n ; i++) printf("%d\n" , arr[i]);
  return 0;
}