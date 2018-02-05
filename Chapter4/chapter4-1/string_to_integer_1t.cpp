#include<iostream>
#include<cstring>
using namespace std;

int power10(int n);

int main(){
  char s[10] = "26962869";
  int integer = 0;
  int length = strlen(s);
  for( int i = 0 ; i < length ; i++){
    int temp = (s[i]-'0')*power10(length-i-1);
    integer += temp;
    cout << "temp = " << temp << endl;
  }
  cout << "string to integer : " << integer << endl;
  return 0;
}

int power10(int n){
  int ans = 1;
  for( int  i = 0 ; i < n ; i++ ){
    ans *= 10;
  }
  return ans;
}
