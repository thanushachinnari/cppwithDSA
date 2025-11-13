#include<bits/stdc++.h>
using namespace std;
int frequency_count(vector<int>& arr){
int count=0;
int n = arr.size();
for(int i =0;i<n;i++){
  if(arr[i]==arr[i++]){
    count++;
  }
}
return count;
}

int main(){
  vector<int> arr ={1,1,2,3,5,3,2,6,0,0,8,7,6};
   cout<<frequency_count(arr);
  return 0;
}