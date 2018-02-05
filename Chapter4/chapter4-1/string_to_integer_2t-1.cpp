#include<iostream>
#include<cstring>

using namespace std;

int main(){
  char s[10] = "26962869";
  int length = strlen(s);

  int n = 0;
  for( int i = 0 ; i < length ; i++){
    n *= 10;
    n += s[i]-'0';
  }
  cout << "string to integer : " << n << endl;

  return 0;
}
