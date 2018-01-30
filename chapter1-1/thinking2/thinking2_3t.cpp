#include<iostream>
#include<string>
using namespace std;

void print_triangle(int length);

int main(){
  print_triangle(5);
  return 0;
}
void print_triangle(int length){
  for(int i = 1; i <= length; i++){
    cout << string(i, 'A') << endl;
  }
  return;
}
