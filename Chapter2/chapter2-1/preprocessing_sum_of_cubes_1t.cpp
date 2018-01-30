#include<iostream>
#include<vector>
using namespace std;

vector<int> cube_table;
void init_cube_table();
int sum_of_cubes(int n);
bool isComputed(int n);
void compute_cube_of(int n);

int main(){
  int n = 5;
  init_cube_table();
  cout << "sum of cubes from 1 to " << n << " is " << sum_of_cubes(n);
  return 0;
}
void init_cube_table(){
  int n = 5;
  for(int i = 0; i <= 5; i++){
    cube_table.push_back(i*i*i);
  }
}
int sum_of_cubes(int n){
  int sum = 0;
  for(int i = 0; i <= n ; i++){
    if(!isComputed(i)){
      compute_cube_of(i);
    }
    sum += cube_table[i];
  }
  return sum;
}
bool isComputed(int n){
  if( ( n>0 )&&( n < cube_table.size() ) ){
    return true;
  }else{
    return false;
  }
}
void compute_cube_of(int n){
  cube_table.push_back(n*n*n);
}
