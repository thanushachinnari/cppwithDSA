// Count even and odd numbers in an array

#include<bits/stdc++.h>
using namespace std;

void count_even_odd(vector<int>& arr){
  int n = arr.size();
  int odd =0,even = 0;
  for (int i = 0; i < n; i++)
  {
    if(arr[i]%2==0){
       even++;

    }
    else{
      odd++;
    }
  }
  cout<<"even numbers in a array is: "<<even<<endl;
  cout<<"odd numbers in a array is: "<<odd<<endl;

  
}



int main(){
 vector<int> arr = {2, 5, 1, 7, 3};
   count_even_odd(arr);

  return 0;
}
