#include<iostream>
#include<stack>
using namespace std;
bool isMatching(char a,char b){
    if((a=='{' && b=='}')||
        (a=='[' && b==']')||
        (a=='(' && b==')')
    )return true;
    

    return false;
}

bool  isBalanced(string str){
    stack <char> stk;
    for(char x:str){
        if(x=='[' || x=='(' || x=='{'){
            stk.push(x);
        }
        else{
            if(!stk.empty()){
                 if(isMatching(stk.top(),x))
                    stk.pop();
            }
            else{
                return false;
            }
           
        }
    }

    if(stk.empty()){
        return true;
    }

    return false;
}


/*

stack<char> stk;
        for(char x:s){
            if(x=='(' || x=='{' || x=='['){
                stk.push(x);
            }
            else{
                if(stk.empty() || !isMatching(stk.top(),x) ){
                    return false;
                }
                stk.pop();
            }
          
        }
          return stk.empty();
    }


*/
int main(){

    string str="]";
    cout<<isBalanced(str);
}