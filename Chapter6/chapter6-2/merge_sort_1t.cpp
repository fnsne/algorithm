#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_sort(int numbers[], int beg, int end);
vector<int> put_2_sorted_array_into1(vector<int> &a, vector<int> &b);

int main(){
  int numbers[] = {2,-1,3,9,9,-2,0,5};
  int length = sizeof(numbers)/sizeof(numbers[0]);

  cout << "the sorted numbers is " << endl;
  vector<int> sorted_num = merge_sort(numbers, 0, length-1);
  for(int num : sorted_num){
    cout << num << ", ";
  }
  return 0;
}
vector<int> merge_sort(int numbers[], int beg, int end){
  vector<int>sorted_num = vector<int>();
  if(beg < end){
    //divide and conquer
    vector<int> left_sorted_nums = merge_sort(numbers, beg, (beg+end)/2);
    vector<int> right_sorted_nums = merge_sort(numbers, (beg+end)/2+1, end);
    //combine
    sorted_num = put_2_sorted_array_into1(left_sorted_nums, right_sorted_nums);
  }else{
    sorted_num.push_back(numbers[beg]);
  }
  return sorted_num;
}
vector<int> put_2_sorted_array_into1(vector<int> &a, vector<int> &b){
  int i = 0 , j = 0;
  vector<int> sorted_nums;
  int left_length = a.size();
  int right_length = b.size();

  while( (i<left_length)&&(j<right_length) ){
    if( a[i] < b[j] ){
      sorted_nums.push_back(a[i]);
      i++;
    }else{
      sorted_nums.push_back(b[j]);
      j++;
    }
  }

  for(; i<left_length; i++){
    sorted_nums.push_back(a[i]);
  }
  for(; j < right_length; j++){
    sorted_nums.push_back(b[j]);
  }
  return sorted_nums;
}
