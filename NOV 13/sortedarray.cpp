// Check if an array is sorted or not

#include<bits/stdc++.h>
using namespace std;
void storted_array(vector<int>& arr){
  int n = arr.size();
  bool sorted = true;
  for(int i =0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
     sorted = false;
     break;
    }
     
  }
  if(sorted)
  cout<<"the array is sorted"<<endl;
  else
  cout << "The array is not sorted" << endl;
}


int main(){
vector<int>arr ={1, 2, 3, 4};
storted_array(arr);

  return 0;
}








