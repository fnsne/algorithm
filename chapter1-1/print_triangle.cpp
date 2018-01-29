#include<iostream>
using namespace std;

void print_triangle(int n);
void print_character_line(char ch, int times);

int main(){
  print_triangle(5);
  return 0;
}

void print_triangle(int n){
  for(int i = n ; i >= 0 ; i--){
    print_character_line('A', i);
  }
}

void print_character_line(char ch, int times){
  for(int i = 0 ; i < times; i++){
    cout << ch ;
  }
  cout << endl;
}
