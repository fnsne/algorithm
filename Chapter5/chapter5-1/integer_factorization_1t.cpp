#include<iostream>
#include<vector>
using namespace std;

void integer_factorization(int n, vector<int> &stack);

int main(){
  int n = 120;
  vector<int> stack;
  integer_factorization(n,stack);
  cout << "factorization " << n << " is " << endl;
  for(int i = 0 ; i < stack.size(); i++){
    cout << stack[i] << ' ';
  }

  return 0;
}

void integer_factorization(int n, vector<int> &stack){
  if( n == 1){
    stack.push_back(1);
  }else{
    for(int i = 2 ; i <= n; i++){
      if(n%i == 0){
        stack.push_back(i);
        integer_factorization(n/i, stack);
        break;
      }
    }
  }
  cout << "in function" << endl;
  return;
}
