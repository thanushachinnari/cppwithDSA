// Calculate the sum of all elements in an array

#include<bits/stdc++.h>
using namespace std;
int sum =0;
int sum_elements(vector<int>& arr){
       int n = arr.size();
       for(int i =0;i<n;i++){
        sum = sum+arr[i];
       }
       return sum;
}


int main(){
       vector<int>arr = {2, 5, 1, 7, 3};
  cout<<"sum od all elements in the array is :"<<sum_elements(arr)<<endl;
  return 0;
}
