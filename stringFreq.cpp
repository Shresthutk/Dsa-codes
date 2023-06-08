#include<iostream>
#include<string>
#include<map>
using namespace std;

void freq(string str){
   string s ="";
   map <char,int> m;
   for(auto el:str){
      m[el]++;
   }
   for(auto el:m){
      cout<<el.first;
      cout<<el.second;
      // s.push_back(el.first);
      
      // s.push_back(el.second);
   }
   // return s;

}
int main()
{
   string str="aaabbccccddeeeeeeeeeffhgh";
   freq(str);
        

}