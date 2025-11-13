#include<iostream>
using namespace std;
#include<vector>
void vectorpratices(){
  vector<int> v ;
  v.push_back(40);
  v.push_back(70);
  v.push_back(3);
  for(int i =0;i<v.size();i++){
    cout<<v[i];
    cout<<endl;



vector<int>::iterator ite = v.begin();
ite++;
cout <<"it first element in the vector"<<*(ite);

for(vector<int>::iterator ite = v.begin();ite != v.end();ite++){
  cout<<*(ite)<<" ";
}
  }
}
int main(){
    vectorpratices();
return 0;
}