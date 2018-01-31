#include<iostream>
#include<vector>
using namespace std;
vector<int> cubes_table;

void initTable(int n);
int sum_of_cubes(int n);
bool isComputed(int n);
void compute_cubes_of(int n);

int main(){
  int n = 10;
  cout << "sum of cubes of " << n << " is " << sum_of_cubes(n) << endl;
  return 0;
}
void initTable(int n){
  for(int i = 0 ; i <= n ; i++){
    cubes_table.push_back(i*i*i);
  }
  return;
}
int sum_of_cubes(int n){
  int sum = 0;
  if(!isComputed(n)){
    compute_cubes_of(n);
  }
  for(int i = 0 ; i <= n ; i++){
    sum += cubes_table[i];
  }
  return sum;
}
bool isComputed(int n){
  if(n>=cubes_table.size()){
    return false;
  }
  return true;
}
void compute_cubes_of(int n){
  int origin_end = cubes_table.size()-1;
  for(int i = origin_end+1; i <= n; i++){
    cubes_table.push_back(i*i*i);
  }
}
