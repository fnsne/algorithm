#include<iostream>
using namespace std;
int array[5] = {3, 6, 9 ,-1, 8};
void selectionSort( int array[], int size);
void printArray(int array[], int size );

int main(){
    cout << "before sort : ";
    printArray(array, 5);
    selectionSort(array, 5);
    cout << "after sort : ";
    printArray(array, 5);
    return 0;
}

void printArray(int array[], int size){
  for(int i = 0 ; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
  return;
}

void selectionSort( int array[], int size ){
  for( int i = 0 ; i < size ; i++){
    int min_pos = i;
    for(int j = i; j < size ; j++){
      if(array[j] < array[min_pos]){
        min_pos = j;
      }
    }
    int temp = array[i];
    array[i] = array[min_pos];
    array[min_pos] = temp;
  }
  return;
}
