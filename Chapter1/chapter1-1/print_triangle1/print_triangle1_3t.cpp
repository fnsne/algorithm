#include<iostream>
#include<string>
using namespace std;

void print_triangle(int length);

int main(){
  print_triangle(5);
  return 0;
}
void print_triangle(int length){
  for(int i = length ; i > 0; i--){
    cout << (string(i, 'A')) << endl;
  }
  return;
}
