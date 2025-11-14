#include<bits/stdc++.h>
using namespace std;
int main(){
  list<int> ls;
   //inserting in the  list is very less time complexcity 

  ls.push_back(2); //{2}
  ls.push_back(5);//inserting the element in the list{2,5}
  ls.emplace_back(4);//inserting the element in the beginning of the list{2,5,4}
  ls.push_front(6);//inserting element in the front side oof the list{6,2,5,4}
  ls.emplace_front(7);//inserting the element in the front position{7,6,2,5,4,}
  for(int nums:ls){
    cout<<nums<<",";
  }
  return 0;
}