#include<iostream>
#include<vector>
using namespace std;

vector<int> init_numbers();
vector<int> quick_sort(vector<int> numbers);
void print_vector(vector<int> &numbers);

int main(){
  vector<int> origin_num = init_numbers();
  cout << "the origin sequence is ";
  print_vector(origin_num);
  cout << "after quick sort, the sequence is ";
  vector<int> sorted_nums = quick_sort(origin_num);
  print_vector(sorted_nums);
  return 0;
}
vector<int> init_numbers(){
  int data[8] = {2,-1,3,9,9,-2,0,5};
  vector<int>numbers;
  for( int n : data )
    numbers.push_back(n);
  return numbers;
}
vector<int> quick_sort(vector<int> numbers){
  if( numbers.size() != 1 ){
    //divide
    vector<int> smaller_than_pivot;
    vector<int> bigger_equal_than_pivot;
    int pivot = numbers[0];
    for(int i = 1; i < numbers.size(); i++){
      if(numbers[i] < pivot)
        smaller_than_pivot.push_back(numbers[i]);
      else
        bigger_equal_than_pivot.push_back(numbers[i]);
    }
    //conquer
    vector<int> left, right;
    if(smaller_than_pivot.size() != 0){
      left = quick_sort(smaller_than_pivot);
    }
    if(bigger_equal_than_pivot.size() != 0){
      right = quick_sort(bigger_equal_than_pivot);
    }
    //combine
    vector<int> sorted_nums ;
    sorted_nums.insert(sorted_nums.end(), left.begin(), left.end());
    sorted_nums.insert(sorted_nums.end(), pivot);
    sorted_nums.insert(sorted_nums.end(), right.begin(), right.end());
    return sorted_nums;
  }else{
    return numbers;
  }
}
void print_vector(vector<int> &numbers){
  for( int n : numbers )
    cout << n << ", ";
  cout << endl;
  if(numbers.size() == 0){
    cout << "NONE" << endl;
  }
}
