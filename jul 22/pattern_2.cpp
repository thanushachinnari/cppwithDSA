/*
* 
* * 
* * *
*/
#include<iostream>
using namespace std;
void pattern2(int n){
  for(int i =0;i<=n;i++){
    for(int j =1;j<=i;j++){
      cout<<"*"<<" ";
    }
    cout<<"\n";
  }
}
int main(){
  pattern2(5);
  return 0;
}