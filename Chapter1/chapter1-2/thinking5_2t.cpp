#include<iostream>
using namespace std;

int main(){
  int score = 0;
  int sum = 0;
  int pass = 0;
  int num = 0;
  cout << "Input the score (input -1 to exit) : " << endl;
  cin >> score;
  while(score != -1){
    num++;
    sum += score;
    if(score >= 60){
      pass++;
    }
    cout << endl << "pass : " << pass << " average : " << (double)(sum/num) << endl;
  cin >> score;
  }
  return 0;
}
