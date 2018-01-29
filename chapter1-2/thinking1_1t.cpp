#include<iostream>
using namespace std;

int main(){
  int sum = 0;
  int pass = 0;
  cout << "input -1 to exit" << endl;
  int score = 0;
  int num = 0;
  while(score != -1){
    cin >> score;
    if(score != -1){
      num++;
      sum += score;
      if(score >= 60){
        pass++;
      }
      cout << "average: " << (double)sum/num << "   pass " << pass << "  person" << endl;
    }
  }
  return 0;
}
