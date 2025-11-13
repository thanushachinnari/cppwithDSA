// Find the second largest element in an array
// ➤ Without sorting the array.
// ➤ Input: [2, 5, 1, 7, 3] → Output: 7

#include<bits/stdc++.h>
using namespace std;
int SecondLargestElement(vector<int>& arr){
  int n = arr.size();
  int largest = INT_MIN,second_largest = INT_MIN;
  for(int i =0;i<n;i++){
       if(arr[i]>largest){
        second_largest =largest;
        largest = arr[i];
        
       }
       else if(arr[i]>second_largest && second_largest!=largest){
        second_largest=arr[i];
       }
  }
  return second_largest;
}

int main(){
  vector<int> arr ={2, 5, 1, 7, 3};
  cout<<SecondLargestElement(arr);
  return 0;
}


