#include<iostream>
using namespace std;

void print_character_line(char ch, int times);
void print_triangle(int length);

int main(){
  print_triangle(5);
  return 0;
}

void print_character_line(char ch, int times){
  for(int i = 0 ; i < times; i++)
    cout << ch ;
  cout << endl;
}

void print_triangle(int length){
  for(int i = length ; i >= 0 ; i--)
    print_character_line('A', i);
  return ;
}
