// Find the largest element in an array
// ➤ Input: [2, 5, 1, 7, 3] → Output: 7


#include<bits/stdc++.h>
using namespace std;

int largest_element(vector<int>& arr){
  int n = arr.size();
  int largest = -1;
  for(int i =0;i<n;i++){
    if(arr[i]>largest){
      largest = arr[i];
    }
  }

return largest;
}

int main(){
  vector<int> arr ={2, 5, 1, 7, 3};
  cout<<largest_element(arr);   //7
  return 0;

}
