#include<iostream>
#include<vector>
using namespace std;

vector<int> cubes_table;

void init_cube_table(int n);
bool isComputed(int n);
int sum_of_cubes(int n);
void compute_cube_of(int n);

int main(){
  init_cube_table(5);
  int n = 10;
  cout << "sum of cubes from 1 to " << n << " is " << sum_of_cubes(n);
  return 0;
}
void init_cube_table(int n){
  for(int i = 0 ; i <= n; i++){
    cubes_table.push_back(i*i*i);
  }
  return;
}
bool isComputed(int n){
  if( n >= cubes_table.size() ){
    return false;
  }else{
    return true;
  }
}
void compute_cube_of(int n){
  int origin_length = cubes_table.size();
  for(int i = origin_length; i <= n; i++){
    cubes_table.push_back(i*i*i);
  }
  return;
}
int sum_of_cubes(int n){
  int sum = 0;
  for(int i = 0 ; i <= n ; i++){
    if(!isComputed(i)){
      compute_cube_of(i);
    }
    sum += cubes_table[i];
  }
  return sum;
}
