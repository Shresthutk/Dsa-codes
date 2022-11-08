#include<iostream>
using namespace std;

bool isSorted(int* arr,int size){
    if(size==1){
        return true;
    }

    bool restArray=isSorted(arr+1,size-1);
    return (arr[0]<arr[1] && restArray);
}

int printDecNo(int n){
    if(n==0){
      return printDecNo(0);
    }
    cout<<n<<" ";
    return printDecNo(n-1);
}

void inc(int n){
    if(n==1){
        cout<<1;
        return;
    }
    inc(n-1);
    cout<<n;
}


int sumnum(int n){
    if(n<=1){
        return n;
    }
    return n+sumnum(n-1);
}

bool isPalindrome(string str,int start,int end){
    if(start>=end){
        return true;
    }

    return (str[start]==str[end]) && isPalindrome(str,start+1,end-1);
}




int sumOfDigits(int n){
    if(n<=9){
        return n;
    }

    return n%10 +sumOfDigits(n/10);
}

int main(){
    //check if an array is sorted
    int arr[]={15,16,17,26};
    int size=sizeof(arr)/sizeof(int);
    // cout<<isSorted(arr,size);

    //print num in decreasing order
    // printDecNo(15);

    //print num in increasing order
    inc(4);

    //sum of n natural numbers using recurssion
    int a=sumnum(6);
    // cout<<a;

    //palindrome check using recursion
    bool b=isPalindrome("abba",0,3);
    // cout<<endl;
    // cout<<b;

    int result=sumOfDigits(154);
    // cout<<result;
}