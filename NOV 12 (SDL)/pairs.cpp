#include<iostream>
#include<utility>
using namespace std;
void pairpratices(){
  
  pair<int,int> p1={1,2};
 
cout<<" the first element in the pair is:"<<p1.first<<endl;
// it prints the elements inside the pair
 cout<<" the second element in the pair is:"<<p1.second<<endl;



  pair<int,pair<int,int>> p2 = {1,{8,0}};
cout<<" the 2nd pair in the second element:"<<p2.second.second<<endl;
cout<<" the first element :"<<p2.first<<endl;


pair<int,int> arr[] = {{1,0},{2,3},{7,9}};
cout<<arr[1].first<<endl;
cout<<arr[0].second<<endl;

}





int main(){
  pairpratices();
  return 0;
}
