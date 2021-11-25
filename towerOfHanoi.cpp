#include<iostream>
using namespace std;

void toh(int n,int td1,int td2,int td3){
    if(n==0){
        return;
    }
    toh(n-1,td1,td3,td2);
    cout<<n<<" [ "<<td1<<" "<<td2<<" ] "<<endl;
    toh(n-1,td3,td2,td1);
}

int main(){
    toh(3,1,3,2);
}