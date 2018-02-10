#include<iostream>
#include<vector>
using namespace std;

vector<int> init_numbers();
void print_vector(vector<int> &data);
vector<int> merge_sort(vector<int> numbers);
vector<int> sort_by_two(vector<int>a, vector<int>b);

int main(){
  vector<int> numbers = init_numbers();
  cout << "the origin numbers sequence is ";
  print_vector(numbers);
  cout << "after merge sort. the sequence is ";
  vector<int> sorted_nums = merge_sort(numbers);
  print_vector(sorted_nums);
  return 0;
}

vector<int> init_numbers(){
  int data[8] = {2,-1,3,9,9,-2,0,5};
  vector<int> numbers;
  for( int n : data)
    numbers.push_back(n);
  return numbers;
}
void print_vector(vector<int> &data){
  for( int n : data)
    cout << n << ", ";
  cout << endl;
  return;
}
vector<int> merge_sort(vector<int> numbers){
  if(numbers.size() != 1){
    int beg = 0;
    int end = numbers.size();
    int length = numbers.size();
    //divide and conquer
    vector<int> left = merge_sort( vector<int>(numbers.begin(), numbers.begin()+length/2) );
    vector<int> right = merge_sort( vector<int>(numbers.begin()+length/2, numbers.end()) );
    //combine
    vector<int> sorted_nums = sort_by_two(left, right);
    return sorted_nums;
  }else{
    return numbers;
  }
}
vector<int> sort_by_two(vector<int>a, vector<int>b){
  int i = 0, j = 0;
  int l_length = a.size();
  int r_length = b.size();
  vector<int> sorted_nums;
  while( (i<l_length)&&(j<r_length) ){
    if( a[i]<b[j] ){
      sorted_nums.push_back(a[i]);
      i++;
    }else{
      sorted_nums.push_back(b[j]);
      j++;
    }
  }
  for(int idx = i; idx < l_length; idx++)
    sorted_nums.push_back(a[idx]);
  for(int idx = j; idx < r_length; idx++)
    sorted_nums.push_back(b[idx]);
  return sorted_nums;
}
