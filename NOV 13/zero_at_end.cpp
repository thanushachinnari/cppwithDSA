//zeros at end in the array
#include<bits/stdc++.h>
using namespace std;
void zero_at_end(vector<int>& arr){
  int n = arr.size();
  int count = 0;    // it is used to zeros position
  for(int i=0;i<n;i++){
   
    if(arr[i]!=0){     // if the non zero number enters in to the loop
      swap(arr[i],arr[count]); //swap the two numbers
      count++; // incremented after the swap
    }
  }
}

int main(){
  vector<int>arr = {1,2,5,0,7,9,0,6,0};

  zero_at_end(arr);
  for(int nums:arr){
    cout<<nums;
  }

  return 0;
}