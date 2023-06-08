#include<iostream>
#include<queue>
using namespace std;


//use call by refrence when you want to modify the value of argument
void reverse(queue <int> &q){

    if(q.empty()){
        return;
    }

    int temp=q.front();
    q.pop();
    
    reverse(q);
    q.push(temp);
    //15 11 1 6 
    //15 6 1 11
}


int main(){

    queue <int> q;
    q.push(15);
    q.push(11);
    q.push(1);
    q.push(6);
    
    cout<<q.front()<<endl;

    reverse(q);

    cout<<q.front();

}