#include<stdio.h>
int main() {
  long long a=0, b=1, c, i, n;
  printf("Enter the number of terms:");
  scanf("%lld",&n);
  printf("Fibonacci series: ");
  for(i=0; i<n; i++) {
    if (i<=1) {
      c=i;
    } else {
      c=a+b;
      a=b;
      b=c;
    }
    printf("%lld\n", c);
  }
  
  return 0;
}