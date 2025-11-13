// Reverse an array
// ➤ Input: [1, 2, 3, 4] → Output: [4, 3, 2, 1]

#include<bits/stdc++.h>
using namespace std;
void Reverse_num(vector<int>& arr){
  int n =arr.size();
  int reverse_num=0;
  int start = 0;
  int end = n-1;
  while(start<end){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
  
}



int main(){
   vector<int> arr ={1, 2, 3, 4};
    Reverse_num(arr);
    for(int num :arr){
      cout<<num<<" ";
    }
  return 0;
}
