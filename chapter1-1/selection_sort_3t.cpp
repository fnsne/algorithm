#include<iostream>
#include<vector>
using namespace std;

vector<int> initArray();
vector<int> selectionSort(vector<int> origin);
void printArray(vector<int> &data);
void swap(int &a, int &b);

int main(){
  vector<int> originArray = initArray();
  cout << "before sort the array is : " << endl;
  printArray(originArray);
  cout << "after sort the array is : " << endl;
  vector<int> sortedArray = selectionSort(originArray);
  printArray(sortedArray);

  return 0;
}

vector<int> initArray(){
  vector<int> array;
  int data[] = {3,6,9,-8,1};
  for( int element : data){
    array.push_back(element);
  }
  return array;
}
vector<int> selectionSort(vector<int> data){
  vector<int> sortedArray(data);
  for(int i = 0 ; i < sortedArray.size(); i++){
    int min_pos = i;
    for(int j = i ; j < sortedArray.size(); j++){
      if(sortedArray[j] < sortedArray[min_pos]){
        min_pos = j;
      }
    }
    swap(sortedArray[i], sortedArray[min_pos]);
  }
  return sortedArray;
}
void printArray(vector<int> &data){
  for(int element : data){
    cout << element << ", ";
  }
  cout << endl;
}
void swap(int &a, int &b){
  int temp = a;
  a = b;
  b = temp;
}
