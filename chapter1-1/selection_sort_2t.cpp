#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &array);
void printArray(vector<int> array);
void swap(int &a, int &b);

vector<int> initArray();

int main(){
  vector<int> array = initArray();
  cout << "before sort : ";
  printArray(array);
  selectionSort(array);
  cout << "after sort : ";
  printArray(array);
  return 0;
}

vector<int> initArray(){
  int data[5] = {3,6,9,18,1};
  vector<int> array;
  for(int i = 0 ; i < 5 ; i++)
    array.push_back(data[i]);
  return array;
}

void printArray(vector<int> array){
  for(int element:array){
    cout << element << ", ";
  }
  cout << endl;
  return ;
}

void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
  return;
}

void selectionSort(vector<int> &array){
  for(int i = 0 ; i < array.size(); i++){
    int min_pos = i;
    for(int j = i ; j < array.size(); j++){
      if(array[j] < array[min_pos]){
        min_pos = j;
      }
    }
    swap(array[i], array[min_pos]);
  }
  return;
}
