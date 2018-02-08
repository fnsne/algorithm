#include<iostream>
using namespace std;

int gcd(int a, int b);
void swap(int &a, int &b);

int main(){
  int a = 75, b = 45;
  cout << "gcd of " << a << " and " << b << " is " << gcd(a,b) << endl;
  return 0;
}

int gcd(int a, int b){
  int bigger = a;
  int smaller = b;
  if (bigger < smaller){
    swap(bigger, smaller);
  }
  while(smaller!=0){
    int temp = bigger%smaller;
    bigger = smaller;
    smaller = temp;

  }
  return bigger;
}
void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = a;
}
