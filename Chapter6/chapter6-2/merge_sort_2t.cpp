#include<iostream>
#include<vector>

using namespace std;

vector<int> merge_sort(vector<int> data, int beg, int end);
vector<int> put_sorted_2_to_one(vector<int>&a, vector<int>&b);
vector<int> init_numbers();
void print_vector(vector<int>& vec);

int main(){
  vector<int> numbers = init_numbers();
  int beg = 0;
  int end = numbers.size()-1;
  cout << "the origin number sequence is ";
  print_vector(numbers);

  vector<int> sorted_nums = merge_sort(numbers, beg, end);
  cout << "after merge sort " << endl;
  cout << "the sorted number sequence is ";
  print_vector(sorted_nums);

  return 0;
}
void print_vector(vector<int>& vec){
  for(int i : vec){
    cout << i << ", " ;
  }
  cout << endl;
  return;
}
vector<int> merge_sort(vector<int> data, int beg, int end){
  vector<int> sorted_nums;
  if(beg < end){
    //divide and conquer
    vector<int> left = merge_sort(data, beg, (beg+end)/2);
    vector<int> right = merge_sort(data, (beg+end)/2+1, end);

    //combine
    sorted_nums = put_sorted_2_to_one(left, right);
  }else{
    sorted_nums.push_back(data[beg]);
  }
  return sorted_nums;
}
vector<int> put_sorted_2_to_one(vector<int>&a, vector<int>&b){
  vector<int> sorted_nums;
  int i = 0, j = 0;
  int a_length = a.size();
  int b_length = b.size();
  while( (i<a_length)&&(j<b_length) ){
    if(a[i] < b[j]){
      sorted_nums.push_back(a[i]);
      i++;
    }else{
      sorted_nums.push_back(b[j]);
      j++;
    }
  }
  for(; i < a_length; i++){
    sorted_nums.push_back(a[i]);
  }
  for(; j < b_length; j++){
    sorted_nums.push_back(b[j]);
  }
  return sorted_nums;
}
vector<int> init_numbers(){
  int data[8] = {2,-1,3,9,9,-2,0,5};
  vector<int>vec_data;
  for(int i = 0 ; i < sizeof(data)/sizeof(data[0]); i++){
    vec_data.push_back(data[i]);
  }
  return vec_data;
}
