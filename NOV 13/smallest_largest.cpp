// Find the smallest and largest element in an array
// ➤ Use one traversal only.

#include<bits/stdc++.h>
using namespace std;
void Largest_Smallest(vector<int>& arr){
  int n = arr.size();
  int largest = arr[0],smallest = arr[0]; 
  for(int i =0;i<n;i++){//one loop because one traversal only
    
          if(arr[i]>largest){
            largest = arr[i];
            // cout<<largest;
          }
         else if(arr[i]<smallest){
          smallest = arr[i];
          // cout<<smallest;
         }

     }
     cout<<"smallest: "<<smallest<<endl;
     cout<<"largest: "<<largest<<endl;
 
}

int main(){              
  vector<int> arr = { 2, 5, 1, 7, 3};

 Largest_Smallest(arr);

  return 0;
}

