#include<iostream>
using namespace std;

int gcd(int a, int b);

int main(){
  int a = 75, b = 30; // let a bigger than b
  cout << "the gcd of " << a << " and " << b <<" is " << gcd(a, b);

  return 0;
}

int gcd(int a, int b){
  if(b == 0){
    return a;
  }
  return gcd(b, a%b);
}
