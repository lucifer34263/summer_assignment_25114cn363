#include<iostream>
using namespace std;

int main() {
  int n, count=0;
  cout <<" Enter a Number: ";
  cin >> n;

  while (n>0) {
    count+=n%2;
    n/=2;
  }
  cout << "Number of set bits =" << count;
  return 0; 
  
}