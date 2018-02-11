#include<iostream>
#include<vector>
using namespace std;

void print_vector(vector<int> &numbers);
vector<int> data_init();
vector<int> quick_sort(vector<int> &numbers);

int main(){
  vector<int> origin_nums = data_init();
  cout << "origin sequence is : " ;
  print_vector(origin_nums);
  cout << "after quick sort the sequence is : ";
  vector<int> sorted_nums = quick_sort(origin_nums);
  print_vector(sorted_nums);
  return 0;
}
void print_vector(vector<int> &numbers){
  for( int n : numbers)
    cout << n << ", ";
  cout << endl;
  return;
}
vector<int> data_init(){
  int data[8] = {2,-1,3,9,9,-2,0,5};
  vector<int> numbers;
  for( int n : data)
    numbers.push_back(n);
  return numbers;
}
vector<int> quick_sort(vector<int> &numbers){
  if(numbers.size() != 1){
    int pivot = numbers[0];
    vector<int> left_half, right_half, sorted_left, sorted_right;
    //divide
    for(int i = 1; i < numbers.size(); i++){
      if( numbers[i] < pivot ){
        left_half.push_back(numbers[i]);
      }else{
        right_half.push_back(numbers[i]);
      }
    }
    //conquer
    if( left_half.size() > 0 ){
      sorted_left = quick_sort(left_half);
    }
    if( right_half.size() > 0 ){
       sorted_right = quick_sort(right_half);
    }
    //combine
    vector<int> sorted_nums;
    sorted_nums.insert(sorted_nums.end(), sorted_left.begin(), sorted_left.end());
    sorted_nums.insert(sorted_nums.end(), pivot);
    sorted_nums.insert(sorted_nums.end(), sorted_right.begin(), sorted_right.end());
    return sorted_nums;
  }else{
    return numbers;
  }
}
