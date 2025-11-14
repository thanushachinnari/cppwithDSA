// Search for an element in an array (Linear Search / Binary Search)
#include<bits/stdc++.h>
using namespace std;
void searching_element(vector<int>& arr,int target){
  int n =arr.size();
  bool found = false;
  for(int i =0;i<n;i++){
    if(arr[i]==target){
      found = true;
      break;
    }
 }
   if(found){
    cout<<"the given element is there in the array";
   }
   else
{
  cout<<"the given element is not there in the array";
} 



}


int main()
{
  vector<int>arr ={1,4,7,8,0,3,2,9};
  searching_element( arr, 6);
  return 0;
}

