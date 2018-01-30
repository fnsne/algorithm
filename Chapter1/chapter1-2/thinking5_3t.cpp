#include<iostream>
#include<regex>
#include<string>
using namespace std;

int main(){
  int num = 0;
  int sum = 0;
  int pass = 0;
  string input;
  cout << "input nondigit to exit " << endl;
  cin >> input;
  regex pattern("[0-9]+");
  while(regex_match(input, pattern)){
    int score = stoi(input);
    num++;
    sum += score;
    pass = (score >= 60) ? pass+1 : pass;
    cout << "pass : " << pass << "  average : " <<(double)sum/(double)num << endl;
    cin >> input;
  }


  return 0;
}
