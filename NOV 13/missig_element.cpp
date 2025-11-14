// Find the missing number in an array of size n−1
// ➤ Example: [1, 2, 4, 5, 6] → Output: 3
#include<bits/stdc++.h>
using namespace std;
void missing_element(vector<int>& arr){
       int n = arr.size();
       int total_sum =0 ;
       for(int i = 0;i<=n+1;i++){
        total_sum = total_sum+i;
       }
       int array_sum =0;
       for(int i =0;i<n;i++){
        array_sum = array_sum+arr[i];
       }
      int final_sum = total_sum - array_sum;
      cout<<final_sum;


  // return 0;
}
int main(){
  vector<int>arr = {1,4,3,5};
  missing_element(arr);
  return 0;
}