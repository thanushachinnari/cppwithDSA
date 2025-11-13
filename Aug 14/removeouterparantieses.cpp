#include<iostream>
using namespace std;
#include<vector>
string removeOuter(string s){
      int n = s.size();
      int count = 0;
      string result = "";
      for(int i =0;i<n;i++){
        
         if(s[i]==')'){
          count--;
         }
         if(count!=0){
          result = result+s[i];
         }
          if(s[i]=='(')
         {
          count++;
         }
      } 

  return result;
}
int main(){
  string s = "(()()))(())";
   string op = removeOuter(s);
   cout<<"after removing outmost parenthesis is:"<<op;
  return 0;

}