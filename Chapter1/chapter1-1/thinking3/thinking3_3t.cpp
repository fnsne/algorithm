#include<iostream>
#include<string>
using namespace std;

void print_diamond(int length);

int main(){
  print_diamond(5);
  return 0;
}

void print_diamond(int length){
  for(int i = 0; i <= length/2; i++){
    cout << (string(length/2-i, ' ') + string(2*i+1, 'A') + string(length/2-i, ' ') ) << endl;
  }
  for(int i = length/2-1; i >= 0; i--){
    cout << (string(length/2-i, ' ') + string(2*i+1, 'A') + string(length/2-i, ' ') ) << endl;
  }
}
