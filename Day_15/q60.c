#include<stdio.h> 
int main() {
  int n=0, i, j, x=0;
  printf("ENTER THE SIZE OF ARRAY:"); 
  scanf("%d", &n);
  int arr[n];
  printf("Enter the elements:");
  for (i=0 ; i<n ; i++) scanf("%d" , &arr[i]);
  int a[n];
  for (i=0; i<n ; i++) {
    if ( arr[i]!=0){
      a[x]= arr[i];
      x++;
    }
  }
  while (x<n) {
    a[x] = 0;
    x++;
  }
  for (i=0 ; i<n ; i++){
    arr[i]=a[i];
  }
  printf("Edited Array is: ");
  for (i=0 ; i<n ; i++) { 
    printf("%d\n" , arr[i]);
  }
  return 0;
}